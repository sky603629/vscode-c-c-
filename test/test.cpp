#include <stdio.h>
#include <Windows.h>
#include "test.h"


int main()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");
    printf("\n");

    // 调用main.cpp中定义的函数
    printWelcome();

    // 调用test函数
    printf("\n调用test函数:\n");
    test();

    // 演示数学运算函数
    printf("\n演示数学运算:\n");
    int num1 = 10, num2 = 5;

    int sum = add(num1, num2);
    printf("%d + %d = ", num1, num2);
    printResult(sum);

    int product = multiply(num1, num2);
    printf("%d * %d = ", num1, num2);
    printResult(product);

    printf("\n程序执行完毕!\n");
    system("pause");
    return 0;
}