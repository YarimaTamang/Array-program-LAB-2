#include<stdio.h>
int main()
{
	int i,arr[4];
printf("print the elements of array\n");
	for(i=0;i<4;i++)
	{
		printf("element %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("the reverse element in array are\n");
	for(i=4;i>0;i--){
		printf("%d",arr[i-1]);
			}
			printf("\n");
}

