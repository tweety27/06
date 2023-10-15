#include <stdio.h>

void square(int n)
{
    int sq;

    sq = n * n;

    printf("정수의 제곱은 %d 입니다.\n", sq);
}

int main(void)
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    square(num);

    return 0;
}
