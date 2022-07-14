//
// Created by FYT on 2022/6/22.
//

#include <stdio.h>
#include <stdlib.h>
//获取系统时间
#include "time.h"


int getLength() {
    int ints[] = {1, 2, 3, 5, 7, 8, 45, 3, 23, 6};
    int length = sizeof(ints) / 4;
    //int 占4字节
    printf("sizeof(a) = %d\n", length);
    return length;
}
