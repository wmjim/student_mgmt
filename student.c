#include "student.h"
#include <stdio.h>

Student create_student() {
    Student stu;
    printf("输入 ID、姓名、年龄：\n");
    scanf("%d %s %d", &stu.id, stu.name, &stu.age);

    printf("输入类型（0=本科生 1=研究生）：");
    scanf("%d", (int*)&stu.degree_type);

    if (stu.degree_type == UNDERGRAD) {
        printf("宿舍号：");
        scanf("%d", &stu.extra.dorm_number);
    } else {
        printf("论文题目：");
        scanf("%s", stu.extra.thesis_title);
    }

    printf("输入成绩：\n");
    for (int i = 0; i < 5; i++) { scanf("%f", &stu.scores[i]); };

    stu.avg_score = calculate_avg_score(stu.scores, 5);
    stu.created_at = time(NULL);

    return stu;
}

void print_student(const Student* s) {
    printf("ID: %d, 姓名：%s, 年龄：%d\n", s->id, s->name, s->age);
    printf("平均分：%.2f，创建时间：%ld\n", s->avg_score, s->created_at);
    if(s->degree_type == UNDERGRAD) {
        printf("本科生，宿舍号：%d\n", s->extra.dorm_number);
    } else {
        printf("研究生，论文题目：%s\n", s->extra.thesis_title);
    }
}

float calculate_avg_score(const float scores[], int len) {
    float sum = 0;
    for (int i = 0; i < len; i++) { sum += scores[i]; };
    return sum / len;
}