
#include "time.h"



void printTime(){
    time_t seconds;
    seconds = time(NULL);
    printf("自 1970-01-01 起的小时数 = %ld\n", seconds/3600);
}


//利用时间当做seed制作随机数
int stuRand() {
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        int r = rand();
        printf("rand: %d \n", r);
    }
    return 0;
}