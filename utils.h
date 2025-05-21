#ifndef UTILS_H
#define UTILS_H

#include "student.h"

int find_student_by_id(Student* list, int count, int id);
void delete_student(Student* list, int* count, int index);

#endif /* end UTILS_H */
