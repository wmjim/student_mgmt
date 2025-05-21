#ifndef STUDENT_H
#define STUDENT_H

#include <time.h>

typedef enum { UNDERGRAD = 0, POSTGRAD } Degree;

typedef union {
    char thesis_title[100]; // 研究生
    int dorm_number;        // 本科生
} ExtraInfo;

typedef struct {
    int id;
    char name[30];
    int age;
    Degree degree_type;
    ExtraInfo extra;
    float scores[5];    // 5 门课程成绩
    float avg_score;
    time_t created_at;  // 创建时间
} Student;

Student create_student();
void print_student(const Student* s);
float calculate_avg_score(const float scores[], int len);

#endif /* end STUDENT_H */