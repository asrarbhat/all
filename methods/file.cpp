#include<iostream>

long int factorial(int);

int main()
{
	for(int i=0;i<10;i++)
	{
		std::cout<<factorial(i-3)<<std::endl;
	}
	return 0;
}
long int factorial(int n)
{
	if (n<=0){
		return 0;
	}
	long int output=1;
	for(int i=1;i<=n;i++)
	{
		output*=i;
	}
	return output;
}
