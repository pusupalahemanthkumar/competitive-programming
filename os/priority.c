#include<stdio.h>
int main()
{
    int bt[20],p[20],wt[20],tat[20],pos=0,pr[20],i,j,n,total=0,temp;
    float avg_wt=0,avg_tat=0;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    
    for(i=0;i<n;i++)
    {
    	printf("\nEnter Burst Time and Priority\n");
        scanf("%d",&bt[i]);
        scanf("%d",&pr[i]);
    }
    for(i=1;i<n+1;i++)
   { 
	for(j=0;j<n;j++){
	if(pr[j]==i)
	break;}
	wt[j]=total;
	total+=bt[j];
    }
  total=0;
   for(i=0;i<n;i++)
     total+=wt[i]; 
   avg_wt=total/n;total=0; 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("\n%d\t\t  %d\t\t    %d\t\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;    
    printf("\n\nAverage Waiting Time=%.2f",avg_wt);
    printf("\nAverage Turnaround Time=%.2f\n",avg_tat);
    return 0;
}
