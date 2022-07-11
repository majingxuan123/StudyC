//
// Created by FYT on 2022/7/11.
//

#include <stdio.h>
#include <stdlib.h>
#include "time.h"

/**
 * 获取用户输入的字符串
 */
void scanStr() {
    char str[10];
    printf("请输入一个字符串:\n");
    //这里只接受9  是因为第十位留给/0  结束字符  如果超过了10会报错
    scanf("%9s", str);
    printf("用户输入了 %s",str);
}

/**
 * 输出字符串
 */
void outStr() {
    char str[2][10] = {"hello", "world"};
    printf("数组长度为 : %d \n", sizeof(str));
    for (int i = 0; i < sizeof(str); ++i) {
        printf("字符串 %s \n", str[i]);
    }
}


void stuLength() {
    char str[20] = "nihaoa \0 @qq.com";
    printf("stringleng %d \n", strlen(str));
    printf("stringleng %d \n", sizeof(str));
}
