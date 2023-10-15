#include <stdio.h>

void get_max(int x, int y)
{
    int max;

    if (x > y){
        max = x;
    } else {
        max = y;
    }

    printf("두 개의 정수 중 큰 정수는 %d 입니다.\n", max);
}

int main(void)
{
    int num1, num2;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    get_max(num1, num2);

    return 0;
}
