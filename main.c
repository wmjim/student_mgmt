#include <stdio.h>
#include "student.h"
#include "file_io.h"
#include "menu.h"
#include "utils.h"

#define MAX_STUDENTS 100

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;

    while(1) {
        show_menu();
        int ch = get_choice();

        if (ch == 0) {
            break;
        } else if (ch == 1) {
            if (count < MAX_STUDENTS) {
                students[count++] = create_student();
            }
        } else if (ch == 2) {
            int id;
            printf("输入学号：");
            scanf("%d", &id);
            int idx = find_student_by_id(students, count, id);
            if (idx != -1) delete_student(students, &count, idx);
        } else if (ch == 3) {
            for (int i = 0; i < count; i++) {
                print_student(&students[i]);
            }
        } else if (ch == 4) {
            save_students("students.dat", students, count);
        } else if (ch == 5) {
            count = load_students("students.dat", students, MAX_STUDENTS);
        }
    }

    return 0;
}