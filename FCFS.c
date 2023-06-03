#include<stdio.h>
#include<stdlib.h>
#define max 10

int main(){
    int i,n,at[max],bt[max],wt[max],tat[max],temp[max];
                                                         //at:arrivial time , bt:burst time,wt:waiting time,tat:turnaround time 
    float Twt=0;                                     
    float Ttat=0;                                        // Twt: total waiting time , Ttat: total turn around time
    float awt;
    float atat;                                          // awt: average waiting time , atat: average turn around time

    printf(" \n Enter the value of nummber of process : ");
    scanf("%d",&n);

    printf("\n Enter the value of BURST Time : ");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }

     printf("\n Enter the value of ARRIVIAL Time : ");
    for(i=0;i<n;i++){
        scanf("%d",&at[i]);
    }

    temp[0]=0;

    //printing data in tabular form
    printf("\n Process \t Burst Time \t Arrivial Time \t Waiting Time \t Turn around time ");
     for(i=0;i<n;i++){
        wt[i]=0;                                               // !st Process zero waiting time
        tat[i]=0;

        temp[i+1]=temp[i]+bt[i];

        wt[i]=temp[i]-at[i];

        tat[i]=wt[i]+bt[i];

        Twt =Twt+wt[i];
        Ttat=Ttat+tat[i];

        printf("\n %d \t          %d \t          %d \t           %d              %d ",i+1,bt[i],at[i],wt[i],tat[i]);
        
     }

    awt = Twt/n;
    atat= Ttat/n;

    printf("\n Average waiting time  %f : ",awt);
    printf("\n Average Turn Around  time  %f : ",atat);

  return 0;

}