#include<iostream>

int main()
{
	int arr[4];
	arr[0]=3;
	arr[1]=31;
	arr[2]=32;       
       	arr[3]=22;

	std::cout<<arr[0]<<std::endl;
	arr[2]=3;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		std::cout<<arr[i]<<std::endl;
	}

	return 0;
}
