// 11. 숫자 오름차순 정렬하기
#include <stdio.h>
int num[10];
void sorting(int a[10]) {
  int t = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if (a[j] > a[j + 1]) {
        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
}int main() {
  for (int i = 0; i < 10; i++) {
    scanf("%d ", &num[i]);
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");
  sorting(num);
  for (int i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }
}