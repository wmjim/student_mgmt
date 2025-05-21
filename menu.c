#include "menu.h"
#include <stdio.h>

void show_menu() {
    printf("\n=== 学生管理系统 ===\n");
    printf("1. 添加学生\n");
    printf("2. 删除学生\n");
    printf("3. 显示所有学生\n");
    printf("4. 保存到文件\n");
    printf("5. 从文件加载\n");
    printf("0. 退出\n");    
}

int get_choice() {
    int ch;
    printf("请输入选项：");
    scanf("%d", &ch);
    return ch;
}