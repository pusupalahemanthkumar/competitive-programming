#include<stdio.h>
#include<pthread.h>

unsigned long sum[4];

void *thread_fn(void *arg){
	long id= (long) arg;
	int start = id + 2500000;
	int i=0;
	while(i<2500000){
		sum[id] += (i+ start);
		i++;
	}
	return NULL;
}
int main(){
	pthread_t t1,t2,t3,t4;
	
	pthread_create(&t1,NULL,thread_fn, (void *)0);
	pthread_create(&t2,NULL,thread_fn, (void *)1);
	pthread_create(&t3,NULL,thread_fn, (void *)2);
	pthread_create(&t4,NULL,thread_fn, (void *)3);
	
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);
	pthread_join(t4,NULL);
	
	printf("%lu \n",sum[0]+sum[1]+sum[2]+sum[3]);
	
	return 0;
	
}



