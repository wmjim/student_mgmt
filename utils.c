#include "utils.h"

int find_student_by_id(Student* list, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (list[i].id == id) return i;
    }
    return -1;
}

void delete_student(Student* list, int* count, int index) {
    for (int i = index; i < *count - 1; i++) {
        list[i] = list[i + 1];
    }
    (*count)--;
}