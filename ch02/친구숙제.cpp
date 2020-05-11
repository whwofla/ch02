#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
#define MAX_STACK_SIZE 100


typedef char element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;
void init_stack(StackType* s) { s->top = -1; }
int size(StackType* s) { return s->top + 1; }
int is_empty(StackType* s) { return (s->top == -1); }
int is_full(StackType* s) { return (s->top == MAX_STACK_SIZE - 1); }


void push(StackType* s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else s->data[++(s->top)] = item;
}

element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}

element peek(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[s->top];
}

int prec(char op)
{
    switch (op) {
    case '(': case ')': return 0;
    case '+': case '-': return 1;
    case '*': case '/': return 2;
    }
    return -1;
}

char* infix_to_postfix(char exp[])
{
    char* postfix = malloc(sizeof(char) * 50);
    int i = 0;
    char ch, top_op;
    int len = strlen(exp);
    int id = 0;
    StackType s;
    init_stack(&s);
    for (i = 0; i < len; i++) {
        ch = exp[i];
        switch (ch) {
        case '+': case '-': case '*': case '/':
            while (!is_empty(&s) && (prec(ch) <= prec(peek(&s)))) {
                postfix[id] = ("%c", pop(&s));
                id++;
            }
            push(&s, ch);
            break;
        case '(':
            push(&s, ch);
            break;
        case ')':
            top_op = pop(&s);
            while (top_op != '(') {
                postfix[id] = ("%c", top_op);
                id++;
                top_op = pop(&s);
            }
            break;
        default:
            postfix[id] = ("%c", ch);
            id++;
            break;
        }
    }
    while (!is_empty(&s)) {
        postfix[id] = ("%c", pop(&s));
        id++;
    }
    postfix[id] = 0x00;
    return postfix;
}









int eval(char exp[])
{
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    StackType s;
    init_stack(&s);
    for (i = 0; i < len; i++) {
        ch = exp[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';
            push(&s, value);
        }
        else {
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {
            case '+': push(&s, op1 + op2); break;
            case '-': push(&s, op1 - op2); break;
            case '*': push(&s, op1 * op2); break;
            case '/': push(&s, op1 / op2); break;
            }
        }
    }
    return pop(&s);
}


int main(void)
{
    const char* s = "(2+3)*4+9";
    printf("중위표시수식 %s \n", s);
    printf("후위표시수식 ");
    char* postfix = infix_to_postfix(s);
    printf("%s \n", postfix);
    int result = eval(postfix);
    printf("결과값은 %d\n", result);
    free(postfix);
}