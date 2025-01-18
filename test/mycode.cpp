#include <iostream> 
#include <stdio.h>
#include <unistd.h>
using namespace std;
int main(){
    int cnt=10;
    while (cnt--){
        printf("%2d\r",cnt);
        fflush(stdout);
        sleep(1);
    }

    return 0;
}
