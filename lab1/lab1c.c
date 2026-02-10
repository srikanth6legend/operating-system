#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
printf("Before declaring FORK.\n");
printf("The value of PID is : \n");
printf("%d\n",getpid());
printf("The value of PPID is : \n");
printf("%d\n",getppid());

pid_t pid=fork();//Used to create child process
if(pid==0)//Child Process
{
printf("After declaring FORK.\n");
printf("The value of PID is zero.\n");
printf("The value of PID is : \n");
printf("%d\n",getpid());
printf("The value of PPID is : \n");
printf("%d\n",getppid());
}
else if(pid>0)//Parent Process
{
printf("After declaring FORK.\n");
printf("The value of PID is greater than zero.\n");
printf("The value of PID is : \n");
printf("%d\n",getpid());
printf("The value of PPID is : \n");
printf("%d\n",getppid());
}
else//Error
{
printf("After declaring FORK.\n");
printf("The value of PID is less than zero.\n");
printf("The value of PID is : \n");
printf("%d\n",getpid());
printf("The value of PPID is : \n");
printf("%d\n",getppid());
}
}
