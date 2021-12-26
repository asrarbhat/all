#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> list;
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	//cout<<list<<endl;
	list.pop_back();
	//cout<<list<<endl;
	list.insert(list.begin()+1,22);
	//cout<<list<<endl;
	list.erase(list.begin()+2);
	//cout<<list<<end;//doesn't work

	return 0;
}
