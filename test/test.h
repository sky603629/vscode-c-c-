#ifndef TEST_H
#define TEST_H

#include <stdio.h>

// 函数声明
int test();  // 声明main.cpp中的test函数

// 可以添加更多实用函数声明
void printWelcome();     // 打印欢迎信息
int add(int a, int b);   // 加法函数
int multiply(int a, int b); // 乘法函数
void printResult(int result); // 打印结果

#endif // TEST_H