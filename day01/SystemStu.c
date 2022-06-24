//
// Created by FYT on 2022/6/22.
//

#include <stdio.h>
#include <stdlib.h>

int testSys() {
    //打开系统程序
    system("calc");
    //打开外部程序
//    int result = system("C:\\Users\\FYT\\Desktop\\FeiQ.exe");
    int result = system("calc");
    printf("执行结果:%d", result);
    return result;
}



//
// %c 字符型 %hd  短整型   %ld 长整形    %p 就是打印某对象的内存地址（16进制）
//
// %s 表示字符串 字符串都是以\0结尾  比如  Hello\0 world   这样不会输出后面的world
//
//  %f float   %lf double %e %E double 科学技术法表示的数
//  %c char
void testPrint(){
    int a = 10;
    //输出十进制 -5d表示左边对齐  给a预留5个位置  ========10   ======
    //5d表示左边对齐  给a预留5个位置  ========   10======
    printf("========%-5d===========\n",a);
    //输出十六进制        以0x开头的是16进制
    printf("%x \n",a);
    printf("%X \n",a);
    //输出8进制    0765  以0开头的数字是8进制
    printf("%d \n",a);
}

int testCalc() {
    //默认情况定义的都是有符号的
    int b = 20;
    //这个是无符号的
    unsigned int a = 10;
    //定义一个不可改变的
    const float pi = 3.1415926;
    //auto 是定义函数内部变量的时候用的 【加和不加一样】   半径
    auto float r = 5;
    //%f.2的意思是    这个占位符是浮点型、 保留小数点两位、  这个保留两位会四舍五入
    printf("圆的面积是 %f.2 \n", r * r * pi);
    printf("圆的周长是 %f.2 \n", 2 * r * pi);
    return 0;
}


void testScan(){
    char ch;
    printf("请输入ch的值：");
    scanf("%c",&ch);

    printf("ch=%c \n",ch);
}