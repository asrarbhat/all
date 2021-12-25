#include<iostream>
#include<string>
int main()
{
	std::string str;
//	std::cin>>str;//takes only one token
	getline(std::cin,str);
	std::cout<<str<<std::endl;
	return 0;
}
