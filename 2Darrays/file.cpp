#include<iostream>

int main()
{
	int arr[][3]={//have to give all dimentions except the first one.
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	std::cout<<arr[1][1]<<std::endl;
	arr[2][2]=33;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
			std::cout<<arr[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}
