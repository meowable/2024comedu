#include <stdio.h>
#include <time.h>

int yam(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int a, primeCount = 0;
    clock_t start, end;
    double cpu_time_used;

    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    start = clock();

    printf("1부터 %d까지의 소수: \n", a);
    for (int i = 1; i <= a; i++) {
        if (yam(i)) {
            printf("%d ", i);
            primeCount++;
        }
    }

    end = clock(); 
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; 

    printf("\n\n소수의 개수: %d\n", primeCount);
    printf("실행 시간: %f 초\n", cpu_time_used);

    return 0;
}
