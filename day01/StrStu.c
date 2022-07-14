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
    //gets和scanf区别  允许用户输入空格
    //    gets(str);

    //fgets会读取用户输入的回车  不存在缓冲区溢出的问题
    //    fgets(str);

    //这两个方法无法识别用户输入了多少个字符   容易报错  所以最好用%10 这样来限制

    printf("用户输入了 %s", str);
}

/**
 * 输出字符串
 */
void outStr() {
    char str[2][10] = {"hello", "world"};
    printf("数组长度为 : %d \n", sizeof(str));
    for (int i = 0; i < sizeof(str); ++i) {
        printf("******************** \n");
        printf("字符串 %s \n", str[i]);
        //在输出结束之后自动输出一个 \n
        puts(str[i]);
        //输出到文件
        //fputs(str[i],stdout)
    }
}

void outStrA() {
    char he[] = "Hello World 你好啊!";

    int len = 0;
    while (he[len] != '/0') {
        printf(he[len]);
        len++;
    }

}

void stuLength() {
    char str[20] = "nihaoa \0 @qq.com";
    printf("stringleng %d \n", strlen(str));
    printf("stringleng %d \n", sizeof(str));
}


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
// %c 字符型
// %hd  短整型
// %ld 长整形
// %p 就是打印某对象的内存地址（16进制）
// %s 表示字符串 字符串都是以\0结尾  比如  Hello\0 world   这样不会输出后面的world
// %f float
// %lf double
// %e %E double 科学技术法表示的数
// %c char
void testPrint() {
    int a = 10;
    //输出十进制 -5d表示左边对齐  给a预留5个位置  ========10   ======
    //5d表示左边对齐  给a预留5个位置  ========   10======
    printf("========%-5d===========\n", a);
    //输出十六进制        以0x开头的是16进制
    printf("%x \n", a);
    printf("%X \n", a);
    //输出8进制    0765  以0开头的数字是8进制
    printf("%d \n", a);
}

int testCalc() {
    //这个意思是预留一个位置  随时会有人把名字赋值过来
    volatile char name;
    //这个意思是把内容放置在cpu的寄存器里  不建议用
    register int age;
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


void testScan() {
    char ch;
    printf("请输入ch的值：");
    scanf("%c", &ch);
    printf("ch=%c \n", ch);
//    //
//    char ch1;
//    gets(ch1);
    //利用正则可以接收除了\n以外所有的字符串  可以带空格
    char string;
    scanf("%[^\n]", string);
    char string1[10];
    //parm1 缓冲数组,2 大小,3固定输入这个   代表指针
    //如果输入的少于10  会有\n  大于等于 就没有
    fgets(string1, sizeof(string1), stdin);
    //输出  类似java的 System.out.println()
    char outString[20];
    fputs(outString, stdout);
}


//随机数需要  time.h stdlib.h
void testFor() {
    // 取0~9
    int r = rand() % 10;
    for (int i = 0; i < 10; ++i) {
        switch (i) {
            case 2:
                printf("Hello %d", i);
            default:;
        }
        if (i > 5) {
            printf("%d", i);
        }
    }
}