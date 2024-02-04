#include<stdio.h>
int main()
{
	int arr[4];
	int i,j;
	printf("print the elements of array\n");
	for(i=0;i<4;i++)
	{
		printf("element %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("the unique element in array are\n");
	for(i=0;i<4;i++){
		int count=0;
		for(j=0;j<4;j++)
		{
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==1){
			printf("%d",arr[i]);
		}
	}
	return 0;
}

				


