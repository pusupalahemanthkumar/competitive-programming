#include<stdio.h>
#include<stdlib.h>

struct Process{
	int bt;
	int order;
	char id[10];
	int wt;
	int tat;
};

void findWaitingTime(struct Process a[],int n){
	a[0].wt=0;
	int i;
	for(i=1;i<n;i++){
		a[i].wt = a[i-1].bt +a[i-1].wt;
	}
}
void findTurnAroundTime(struct Process a[],int n){
	int i;
	for(i=0;i<n;i++){
		a[i].tat = a[i].bt + a[i].wt;
		
	}
}

void findavgTime(struct Process a[],int n){
	float total_wt=0,total_tat=0;
	
	findWaitingTime(a,n);
	findTurnAroundTime(a,n);
	
	printf("Processes \t Brust Time \t Waiting Time \t TurnAround Time \t  \n");
	
	int i;
	for(i=0;i<n;i++){
		total_wt+=a[i].wt;
		total_tat +=a[i].tat;
		
		printf(" %s \t\t %d \t\t %d \t\t %d \n",a[i].id,a[i].bt,a[i].wt,a[i].tat);
	}
	printf("Average time : %f \n",(float)total_wt/(float)n);
	printf("Average turn around time : %f \n",(float)total_tat/(float)n);
}

int main(){
	int n;
	printf("Enter number of process :\n");
	scanf("%d",&n);
	
	struct Process a[2000];
	int i;
	for(i=0;i<n;i++){
		printf("Enter enter process id:\n");
		scanf("%s",a[i].id);
		printf("Enter value of bt :\n");
		scanf("%d",&a[i].bt);
		printf("Enter The value order :\n");
		scanf("%d",&a[i].order);
		
	}
	int j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j+1].order <a[j].order){
				struct Process t= a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		
		
	}
	findavgTime(a,n);
	
	return 0;
}
