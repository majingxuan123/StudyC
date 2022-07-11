//
//  main.c
//  StudyC
//
//  Created by 马境宣 on 2022/6/22.
//

#include "../day01/SystemStu.c"
#include "../day01/Test.c"
#include "stdio.h"
#include "stdlib.h"
#include "../day01/StrStu.c"


int stuRand() {
    for (int i = 0; i < 10; ++i) {
        printf("rand: %s", rand());
    }
    return 0;
}

int main(int argc, const char *argv[]) {
    //解决中文乱码
    system("mode con cp select=65001");
    printf("************************ \n");

    scanStr();
    return 0;
}


