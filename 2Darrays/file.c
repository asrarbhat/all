#include<stdio.h>

int main()
{
	int arr[][3]={
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	printf("%d\n",arr[1][1]);

	arr[2][2]=33;

	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
