#include<stdio.h>
int main()
{
	int arr[4];
	int i,sum=0;
	printf("print the elements of array\n");
	for(i=0;i<4;i++)
	{
		printf("element %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("the sum of element in array\n");
	for(i=0;i<4;i++){
		sum=sum+arr[i];
			}
			printf("sum of array is %d",sum);
			printf("\n");
}

