//8. 문자열 역순 출력하기
#include <stdio.h>
char str[14] = {"I am a student"}, rev_str[14];
int main(){
//  fgets(str, 100, stdin);
  for(int i = 0; i<14; i++){
    rev_str[i] = str[13-i];
  }
  printf("%s",rev_str);
}