#include <stdio.h>
int main()
{
    int q[100],a[100],b[100],w[100],t[100],c[100],i,j,temp,temp1,n,s1=0,s2=0,avgw,avgt,tq=5,s=0;
    printf("Enter no. of processes: ");
    scanf("%d", &n);
    printf("\nEnter arrival time: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter burst time: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]<tq)
        {
            c[i]=1;
        }
        else
            c[i]=b[i]/tq;
    }
    //bubble sort
     for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
                temp1=a[j+1];
                a[j+1]=a[j];
                a[j]=temp1;
                
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
        }
    }
    w[0]=0;
    for(i=1;i<n;i++)
    {
        w[i]= w[i-1] + b[i-1];
        s1=s1 + w[i];
    }
    for(i=0;i<n;i++)
    {
        t[i]=w[i] + b[i];
        s2=s2 + t[i];
    }
    
    printf("\nProcess\tBurst\tArrival\tWaitng\tTurnaround");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d\t%d\t%d\t%d", i,b[i],a[i],w[i],t[i]);
    }
    avgw=s1/n;
    avgt=s2/n;
    printf("\nAverage waiting time: %d", avgw);
    printf("\nAverage turnaround time: %d", avgt);
    
    return 0;
}