#include "process.h"
void Processon(){
    int cnt = 0;
    char bar[NUM+1];
    char style[CNT]={'*','#','$','>','%'};
    const char* lable="|\\-/";
    memset(bar,'\0',sizeof(bar));
    while(cnt<=NUM){
        printf("[%-100s][%3d%%][%c]\r",bar,cnt,lable[cnt%4]);
        fflush(stdout);
        bar[cnt++]=style[N];
        usleep(100000);
    }
    printf("\n");
}
