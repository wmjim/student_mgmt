#include "file_io.h"
#include <stdio.h>

int save_students(const char* path, Student* list, int count) {
    FILE* fp = fopen(path, "wb");
    if(!fp) return 0;
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(list, sizeof(Student), count, fp);
    fclose(fp);
    return 1;
}

int load_students(const char* path, Student* list, int max_count) {
    FILE* fp = fopen(path, "rb");
    if (!fp) return 0;
    int count = 0;
    fread(&count, sizeof(int), 1, fp);
    if (count > max_count) count = max_count;
    fread(list, sizeof(Student), count, fp);
    fclose(fp);
    return count;
}
