#include <stdio.h>

int main(void) {
    int a;
    int b;
   
    scanf_s("%d %d", &a, &b);
    for (int i= 0; i < b; i++) {
        printf("\n");
        for (int j = 0; j < a; j++) {
            printf("*");
        }
        printf("%d", a + b);
    }

    return 0;
}