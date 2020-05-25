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
		printf("�̰� ����ֽ��ϴ�");
		return 1;
	}
	else
		return 0;
}

//������ top�� ���Ҹ� �����ϴ� ����
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;
	top = temp;
}

//������ top���� ���Ҹ� �����ϴ� ����

element pop(){
	element item;
	stackNode* temp = top;

	if (top == NULL) {
		printf("����ֽ��ϴ�");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}