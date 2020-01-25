#include<stdio.h>
#include<stdlib.h>
#define size 10

void main()
{
    int arr[size];//={4,8,2,9,1};
	int i,n;

	printf("Enter the Size of the array: ");
	scanf("%d",&n);
	printf("Enter The Unsorted Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge()
	//qs(arr,0,n-1);
	printf("The Sorted Array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
}
