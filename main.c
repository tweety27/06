#include <stdio.h>

void sumTwo(int a, int b)
{
    int sum;

    sum = a + b;
    printf("두 정수의 합은 %d 입니다.\n", sum);
}

int main(void)
{
    int num1, num2;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);


    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    sumTwo(num1, num2);

    return 0;
}
