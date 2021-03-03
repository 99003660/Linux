#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int arr[10]={1,2,3,4,5,6,7,8,9,10};

void* sum(void* n)
{
	int i=*(int*)n;
	printf("%d",arr[i]);
	free(n);
}

int main()
{
	pthread_t arr[10];
	int i;
	for(i=0; i<10; i++)
	{
		int* a=malloc(sizeof(int));
		*a=i;
		if(pthread_create(&arr[i],NULL,&sum,a)!=0)
		{
			perror("failed to create thread\n");
		}		
	}
	for(i=0; i<10; i++)
	{
		if(pthread_join(arr[i],NULL)!=0)
		{
			perror("failed to join thread\n");
		}
	}
	return 0;
}
	
