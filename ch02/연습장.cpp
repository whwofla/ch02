#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

typedef struct stackNode {

	element data;
	struct stackNode* link;
}stackNode;

stackNode* top;

element isEmpty() {
	if (top == NULL) {
		printf("이건 비어있습니다");
		return 1;
	}
	else
		return 0;
}

//스택의 top에 원소를 삽입하는 연산
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;
	top = temp;
}

//스택의 top에서 원소를 삭제하는 연산

element pop(){
	element item;
	stackNode* temp = top;

	if (top == NULL) {
		printf("비어있습니다");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}