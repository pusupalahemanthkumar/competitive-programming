#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

void *thread_fun1(void *arg);
void *thread_fun2(void *arg);
void *thread_fun3(void *arg);

char message[] = "Welcome to linux";

void *thread_fun3(void *arg){
	printf("thread_function is running. Arugument was %s \n",(char*)arg);
	sleep(10);
	strcpy(message,"bye3!");
	pthread_exit("thank you thread 3");
}
void *thread_fun2(void *arg){
	printf("thread_function is running. Arugument was %s \n",(char*)arg);
	sleep(10);
	strcpy(message,"bye2!");
	pthread_exit("thank you thread 2");
}
void *thread_fun1(void *arg){
	printf("thread_function is running. Arugument was %s \n",(char*)arg);
	sleep(10);
	strcpy(message,"bye1!");
	pthread_exit("thank you thread 1");
}

int main(){
	pthread_t a_thread1;
	pthread_t a_thread2;
	pthread_t a_thread3;
	
	void *thread_result1;
	void *thread_result2 ;
	void *thread_result3;
	
	pthread_create(&a_thread1,NULL,thread_fun1, (void *)message);
	pthread_create(&a_thread2,NULL,thread_fun2, (void *)message);
	pthread_create(&a_thread3,NULL,thread_fun3, (void *)message);
	printf("Waiting for thread to finish \n");
	
	pthread_join(a_thread1,&thread_result1);
	pthread_join(a_thread2,&thread_result2);
	pthread_join(a_thread3,&thread_result3);
	
	printf("thread joined it returned %s \n",(char*)thread_result1);
	printf("thread joined it returned %s \n",(char*)thread_result2);
	printf("thread joined it returned %s \n",(char*)thread_result3);
	
	printf("message is now %s \n",message);
	printf("message is now %s \n",message);
	printf("message is now %s \n",message);
	
	exit(0);
	
}
