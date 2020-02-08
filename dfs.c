#include<stdio.h>
#include<stdlib.h>
#define max 6

int Mat[max][max];
int arr[max];
int n; 


void main()
{
	int i,j;
    printf("Enter number of vertices:");
    scanf("%d",&n);
	printf("\n\a");    
    printf("Enter adjecency matrix of the graph:");
	for(i=0;i<n;i++)
      for(j=0;j<n;j++)
			scanf("%d",&Mat[i][j]);
			
	for(i=0;i<n;i++)
        arr[i]=0;   
        DFS(0);
}



void DFS(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}
