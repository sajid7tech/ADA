#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<time.h>
#include<sys/resource.h>
#define max 10

void DFS(int);
int a[max][max],tra[max],n;   
 
void main()
{
    int i,j;
    struct timeval tv1,tv2;
	struct rusage r_usage;
    printf("Enter no. of vertices:");
   
	scanf("%d",&n);
 
	printf("\nEnter the matrix:\n");
   
	for(i=0;i<n;i++)
	{
       for(j=0;j<n;j++)
       {
            scanf("%d",&a[i][j]);
       }
			
	}
 
   for(i=0;i<n;i++)
   {
        tra[i]=0;
   }    
   gettimeofday(&tv1,NULL);
   DFS(0);
   gettimeofday(&tv2,NULL);
   getrusage(RUSAGE_SELF,&r_usage);
   printf("\nTime of function = %f microsec\n",(double)(tv2.tv_usec-tv1.tv_usec));
   printf("Memory Usage = %ld kb\n",r_usage.ru_maxrss);   

}
 
void DFS(int i)
{
    int j;
	printf("\n%d",i);
    tra[i]=1;
	
	for(j=0;j<n;j++)
	{
       if(!tra[j]&&a[i][j]==1)
        {
            DFS(j);
        }
            
    }
}







