#include "ProcessOn.h"
void Process(){
    int cnt=0;
    char bar[NUM];
    const char* signType="#$*+=";
    const char* lable="|\\-/|\\-/";
    memset(bar,'\0',sizeof(bar));
    while(cnt<=100){
        printf("[%-100s][%3d%%][%c]\r",bar,cnt,lable[cnt%8]);
        fflush(stdout);
        bar[cnt++]=signType[N];
        usleep(100000);
    }
}
