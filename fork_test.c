#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t fpid;
    int i = 0;
    
    printf("i\tson/parent\tPPID\tPID\tfpid\n");
    for(i = 0;i < 2;i++)
    {
        fpid = fork();
        if(fpid == 0)
        {
            printf("%d\tchild     \t%4d\t%4d\t%4d\n",i,getppid(),getpid(),fpid);
        }
        else
        {

            printf("%d\tparent     \t%4d\t%4d\t%4d\n",i,getppid(),getpid(),fpid);
        }
    }

    return 0;
}
