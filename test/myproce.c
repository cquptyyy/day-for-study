#include <stdio.h>
#include <sys/types.h>
#include  <unistd.h>
int main()
{
    pid_t id=fork();
    //fork()创建子进程 返回子进程的pid给父进程 返回0给子进程
    if(id==0){
        while(1){
            printf("子进程pid=%d,ppid=%d,id=%d\n",getpid(),getppid(),id);
            sleep(1);
        }
    }
    else{
        while(1){
            printf("父进程pid=%d,ppid=%d,id=%d\n",getpid(),getppid(),id);
            sleep(2);
        }
    }
    return 0;
}

