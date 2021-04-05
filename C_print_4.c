#include <stdio.h>

int main() {
    double a, b, c, n;
    double average;

    printf("세 실수 입력: ");
    n = scanf_s("%lf %lf %lf", &a, &b, &c); // n은 입력받은 수의 개수

    printf("%g\n", n);

    if (n != 3) {
        printf("입력 오류\n");
        return 1;
    }

    average = (a + b + c) / 3.0;
    printf("평균: %g\n", average); // %g는 숫자값의 크기에 따라 %f나 %e로 출력하는 거다.
    return 0;
}
