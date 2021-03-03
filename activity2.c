#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int ret = fork();
	if(ret == 0)
	{
		execlp("./b.out",NULL);
		exit(1);
	}
	else
	{
		printf("parent\n");
		sleep(1);
	}
	return 0;
}
