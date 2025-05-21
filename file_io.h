#ifndef FILE_IO_H
#define FILE_IO_H

#include "student.h"

int save_students(const char* path, Student* list, int count);
int load_students(const char* path, Student* list, int max_count);


#endif /* end FILE_IO_H */