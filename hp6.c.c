#include <stdio.h>

struct GradeInfo {
    int studentID;
    char name[50];
    int korean;
    int english;
    int math;
};

int main() {
    struct GradeInfo students[3] = {
        {2021001, "홍길동", 85, 90, 95},
        {2021002, "이순신", 88, 76, 92},
        {2021003, "김유신", 78, 85, 80}
    };

    for (int i = 0; i < 3; i++) {
        printf("학번: %d\n", students[i].studentID);
        printf("이름: %s\n", students[i].name);
        printf("국어: %d\n", students[i].korean);
        printf("영어: %d\n", students[i].english);
        printf("수학: %d\n\n", students[i].math);
    }

    return 0;
}
