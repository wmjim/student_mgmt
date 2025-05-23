# 学生信息管理系统（C语言项目）

> 本项目旨在通过构建一个完整的学生信息管理系统，巩固并综合应用 C 语言的基础与进阶知识点。

## 📌项目简介

一个基于命令行的学生管理系统，支持学生信息的录入、删除、修改、查询、保存与加载，涵盖结构体、枚举、联合体、文件操作、内存管理、函数指针、预处理器等多个 C 语言核心模块。

## 项目目录

```bash
student_mgmt/
├── main.c        # 程序入口，控制流程
├── student.h     # 数据结构与接口声明
├── student.c     # 结构体定义与学生信息处理逻辑
├── file_io.c     # 文件存储/加载模块
├── menu.c        # 菜单交互模块
├── utils.c       # 辅助功能（查找、删除等）
├── Makefile      # 构建配置
├── students.dat  # 二进制数据保存文件
└── log.txt       # 操作日志
```

## 项目目标

构建一个功能完整的命令行学习信息管理系统，具备如下能力：
- 学生信息的 **增** / **删** / **改** / **查**
- 支持 **文件保存** / **加载**
- 实现 **动态内存管理**
- 使用 **结构体**、**枚举**、**联合体**、**函数指针**
- 提供 **菜单交互** 和 **命令行解析**