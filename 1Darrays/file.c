#include<stdio.h>

int main()
{
	int arr[4]={1,2,3,3};
	printf("%d\n",arr[1]);
	arr[2]=7;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){//sizeof  doesn't work with arrays using pointers
		printf("%d\n",arr[i]);
	}
	return 0;
}
