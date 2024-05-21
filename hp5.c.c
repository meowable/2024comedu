#include <stdio.h>

struct in {
  int number;
  int score;
  char name[10];
};

int main() {
  
  struct in student[10]={
  {{1},{2},{"김"}},
  {{2},{4},{"이"}},
  {{3},{5},{"고"}},
  {{4},{10},{"우"}},
  {{5},{30},{"지"}},
  {{6},{34},{"므"}},
  {{7},{123},{"리"}},
  {{8},{0},{"시"}},
  {{9},{1},{"비"}},
  {{10},{24},{"소"}},
  }; 

  int max = student[0].score;
  int num = 0;
  
  for(int i=0;i<10;i++) {
    if(student[i].score > max) {
      max = student[i].score;
      num = i;
    }
  }

  printf("%s",student[num].name);
}