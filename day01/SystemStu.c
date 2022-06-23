//
// Created by FYT on 2022/6/22.
//

#include <stdio.h>
#include <stdlib.h>

int testSys(){
    //打开系统程序
    system("calc");
    //打开外部程序
//    int result = system("C:\\Users\\FYT\\Desktop\\FeiQ.exe");
    int result = system("calc");
    printf("执行结果:%d",result);
    return result;
}


int testCalc(){
    //定义一个不可改变的
    const float pi = 3.1415926;
    //auto 是定义函数内部变量的时候用的 【加和不加一样】   半径
    auto float r = 5;
    //%f.2的意思是    这个占位符是浮点型、 保留小数点两位、  这个保留两位会四舍五入
    printf("圆的面积是 %f.2 \n",r*r*pi);
    printf("圆的周长是 %f.2 \n",2*r*pi);

    return 0;
}