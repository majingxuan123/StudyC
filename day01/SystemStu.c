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