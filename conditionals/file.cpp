#include<iostream>

int main()
{	
	int n=-1001;
	
	if (n>1000){
		std::cout<<"n is greater than 1000"<<std::endl;
	}
	else if (n<-1000){
		std::cout<<"n is less than -1000"<<std::endl;
	}
	else{
		std::cout<<"n is between -1000 and 1000,both inclusive"<<std::endl;
	}
	return 0;
}
