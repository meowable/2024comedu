//9. 입력받은 숫자만큼 삼각형 그리기
#include <stdio.h>
int k;
void draw(int a){
  for(int i = 0; i<a; i++){
    for(int j = 0; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
}int main(void){
  scanf("%d",&k);
  if(k == 0)
    return 0;
  draw(k);
}