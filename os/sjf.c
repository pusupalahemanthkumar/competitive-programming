#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
    	 printf("Enter Burst Time:");
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1]){
        	temp=bt[j];
        	bt[j]=bt[j+1];
        	bt[j+1]=temp;
        	}
        }
    }
   
    wt[0]=0;            
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }
  
    avg_wt=(float)total/n;      
    total=0;
  
    printf("Process \t Brust time \t Waiting time \t Turn around time\n");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("%d \t\t %d \t\t %d \t\t %d \n",i+1,bt[i],wt[i],tat[i]);
    }
  
    avg_tat=(float)total/n;    
    printf("\nAverage Waiting Time=%.2f\n",avg_wt);
    printf("Average Turnaround Time=%.2f",avg_tat);
    return 0;
}

