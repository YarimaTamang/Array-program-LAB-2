#include<stdio.h>
int main()
{
	int arr[4];
	int i,j,count=0;
	printf("print the elements of array\n");
	for(i=0;i<4;i++)
	{
		printf("element %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("the duplicate element in array are\n");
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++)
		{
			if(arr[i]==arr[j]){
				count++;
				break;
			}
		}
}
printf("the duplicate array ",count);

}

