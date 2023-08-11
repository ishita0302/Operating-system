#include <stdio.h>
int
main ()
{
  int q[100], a[100], b[100], p[100], pr[100], w[100], t[100], c[100], i, j,
    temp, temp1, temp2, temp3, n, s1 = 0, s2 = 0, avgw, avgt, tq = 5, s = 0;
  printf ("Enter no. of processes: ");
  scanf ("%d", &n);
  printf ("\nEnter process: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &pr[i]);
    }
  printf ("\nEnter arrival time: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("\nEnter priority: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &p[i]);
    }
  printf ("\nEnter burst time: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &b[i]);
    }
  //bubble sort
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n - i - 1; j++)
	{
	  if (p[j] > p[j + 1])
	    {
	      temp = b[j + 1];
	      b[j + 1] = b[j];
	      b[j] = temp;
	      temp1 = a[j + 1];
	      a[j + 1] = a[j];
	      a[j] = temp1;
	      temp2 = p[j + 1];
	      p[j + 1] = p[j];
	      p[j] = temp2;
	      temp3 = pr[j + 1];
	      pr[j + 1] = pr[j];
	      pr[j] = temp3;

	    }
	}
    }
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{

	}
    }
  w[0] = 0;
  for (i = 1; i < n; i++)
    {
      w[i] = w[i - 1] + b[i - 1];
      s1 = s1 + w[i];
    }
  for (i = 0; i < n; i++)
    {
      t[i] = w[i] + b[i];
      s2 = s2 + t[i];
    }

  printf ("\nProcess\tBurst\tArrival\tPriority  Waitng  Turnaround");
  for (i = 0; i < n; i++)
    {
      printf ("\n%d\t%d\t%d\t%d\t  %d\t  %d", pr[i], b[i], a[i], p[i], w[i],
	      t[i]);
    }
  avgw = s1 / n;
  avgt = s2 / n;
  printf ("\nAverage waiting time: %d", avgw);
  printf ("\nAverage turnaround time: %d", avgt);

  return 0;
}
