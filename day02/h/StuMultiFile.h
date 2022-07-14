//
// Created by FYT on 2022/7/12.
//

//防止头文件重复包含  比如 a包含了b  b包含了a
#pragma once


//如果已经定义了就不往下走
#ifndef STUDYC_STUMULTIFILE_H
//如果还没定义 就往下走  用于防止重复 include
#define STUDYC_STUMULTIFILE_H
//1头文件要做的事
//全局变量的定义

//声明了一个方法
extern int max(int a, int b);

#endif //STUDYC_STUMULTIFILE_H
