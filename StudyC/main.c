//
//  main.c
//  StudyC
//
//  Created by 马境宣 on 2022/6/22.
//

#include <stdio.h>
#include <stdlib.h>
#include "../day01/SystemStu.c"
#include "../day01/Test.c"
#include "../day01/StrStu.c"
#include "../day01/StuTime.c"
#include "../day02/h/StuMultiFile.h"
#include "../day02/h/StuPoint.h"

//函数如果在主函数下面  就需要声明
extern void stuFunction();

void stuFunction(){
    time_t seconds;
    seconds = time(NULL);
    printf("自 1970-01-01 起的小时数 = %ld\n", seconds/3600);
}

int main(int argc, const char *argv[]) {
    //解决中文乱码
    system("mode con cp select=65001");
    printf("************************ \n");
    arrayPoint();
    return EXIT_SUCCESS;
}

