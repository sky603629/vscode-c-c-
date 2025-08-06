#include <stdio.h>
#include "test.h"

int test()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World2! \n");

    return 0;
}

// 打印欢迎信息
void printWelcome()
{
    printf("=== 欢迎使用我的C程序 ===\n");
    printf("这个程序演示了基本的C函数调用\n");
    printf("========================\n");
}

// 加法函数
int add(int a, int b)
{
    return a + b;
}

// 乘法函数
int multiply(int a, int b)
{
    return a * b;
}

// 打印结果
void printResult(int result)
{
    printf("计算结果是: %d\n", result);
}