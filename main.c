#include <stdio.h>

// 팩토리얼을 계산하는 함수
int factorial(int x) {
    int result = 1;
    if (x == 0) {
        return result;
    } else {
        for (int i = 1; i <= x; i++) {
            result *= i;
        }
        return result;
    }
}

// 조합을 계산하는 함수
void make_combination(int n, int r) {
    double comb;

    if (r < 0 || r > n) {
        comb = 0;
    } else {
        double numerator = (double)factorial(n);
        double denominator = (double)(factorial(r) * factorial(n - r));
        comb = numerator / denominator;
    }

    printf("C(%d,%d) = %f\n", n, r, comb);
}

int main(void) {
    int num1, num2;

    printf("n 값을 입력하세요: ");
    scanf("%d", &num1);

    printf("r 값을 입력하세요: ");
    scanf("%d", &num2);

    make_combination(num1, num2);

    return 0;
}
