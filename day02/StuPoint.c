//
// Created by FYT on 2022/7/12.
//

#include <stdio.h>


void definePoint() {
    int a = 10;
    //定义一个int类型指针类型  存储变量地址     还有其他的  char* cp = ;  void* 是万能指针  万能指针必须得强转之后才能输出内存占用
    //   *(*int) p = 100;    意思是 给指针p强转成int类型指针、然后给这个指针的地址的值赋值为100；
    int *p = &a;
    //将a的地址赋给p   &a 意思是 取a的地址     *p的意思就是取指针p的值
    printf("%p \n", &a);
    printf("%p \n", p);

    printf("修改前的值  %d\n", *p);
    *p = 100;
    printf("通过指针修改变量的值  %d\n", *p);
    //64位系统都是8字节   32位系统都是4字节
    printf("指针占用内存 %d\n", sizeof(*p));
}


//const 离谁近就可以改谁
void changePointValue() {
    //这个值还是能修改的
    const int a = 10;
    int *p = &a;
    // const 定义的  不能修改
    //    a = 100;
    //可以通过指针 来修改这个内存地址的值
    *p = 100;

    //也可以修改指针的内存地址
    //    p = 100;

    printf(" p的值 %d /n", *p);
//    在头文件的#define 是不能修改的

//---------------------------------------------------------------------
    //const 后面的如果是int  那不能改这个地址的int 值
    //如果const 后面的是指针  那不能改指针

    int b = 20;
    const int *pb = &b;

    pb = &a;
    printf("pb的值  %d /n", pb);

    //不能修改指针指向的地址的值
//    *pb = 100;
    //可以修改指针变量的值（地址）
//    pb = 100;

//---------------------------------------------------------------------

    int *const pc = &b;
    //可以改指针地址的值
//    *pc = 100;
    //但是不可以改指针变量的值（地址）
//    pc = 100;


}


void secondPoint() {
    int a = 10;
    int b = 20;

    int *pa = &a;

    //这个就是二级指针
    int **ppa = &pa;

    //二级指针的值（一级指针的地址） 改成  b的内存地址
    *ppa = &b;

    printf("修改后的一级指针的值  %d /n", *pa);
}

void arrayPoint() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'b', 'c', 'd', 'e', 'f'};
    //数组的指针直接这样赋值
    int *arr_p = arr;

//    printf("数组循环开始... \n");
//    for (int i = 0; i < 16; ++i) {
//        printf("%d \n", i, arr[i]);
//    }
//
//    printf("数组【指针】循环开始... \n");
//    for (int i = 0; i < 16; ++i) {
//        printf("%d \n", i, arr_p[i]);
//    }
//
//    printf("数组【指针】循环开始... \n");
//    for (int i = 0; i < 16; ++i) {
//        //int 类型指针地址+1  就等于加上 sizeof（int）  内存地址上加4
//        printf("%d \n", i, *(arr_p + i));
//    }

    printf("数组【指针】循环开始... \n");
    for (int i = 0; i < 16; ++i) {
        //int 类型指针地址+1  就等于加上 sizeof（int）  内存地址上加4
        printf("%d \n", *arr_p++);
    }

}