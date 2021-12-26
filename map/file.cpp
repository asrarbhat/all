#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int> hashmap;
	hashmap["name"]=22;
	hashmap["age"]=33;
	cout<<hashmap["name"]<<endl;
	if (hashmap["year"]==0){
		cout<<-1<<endl;
	}
	else{
		cout<<hashmap["year"]<<endl;
	}
	hashmap.erase("age");

	for(auto itr=hashmap.begin();itr!=hashmap.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}

	return 0;
}
