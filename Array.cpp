#include<stdio.h>
int main()
{
	int arr[4];
	int i;
	printf("print the elements of array\n");
	for(i=0;i<4;i++)
	{
		printf("element %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("the element in array are\n");
	for(i=0;i<4;i++){
		printf("%d",arr[i]);
			}
			printf("\n");
}

