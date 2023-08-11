#include <stdio.h>
int main()
{
    int q[100], a[100], b[100], w[100], t[100], i, n, s1=0, s2=0, avgw, avgt;
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
    w[0]=0;
    for(i=1;i<n;i++)
    {
        w[i]= w[i-1] + b[i-1] - a[i];
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
