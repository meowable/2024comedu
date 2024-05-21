// 10. 연산자와 숫자 2개 입력해서 결과값 출력하기
#include <stdio.h>
int a, b;
char c;
int main() {
  scanf("%c", &c);
  scanf("%d %d", &a, &b);
  if (c == 0)
    return 0;
  if (c == '+')
    printf("%d + %d = %d", a, b, a + b);
  else if (c == '-')
    printf("%d - %d = %d", a, b, a - b);
  else if (c == '*')
    printf("%d * %d = %d", a, b, a * b);
  else if (c == '/')
    printf("%d / %d = %d", a, b, a / b);
}
