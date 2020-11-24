#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector <int> boys,girls;
	int b,g,result=0,val,i=0,j=0;
	cin>>b;
	while(b--){cin>>val; boys.push_back(val);}
	cin>>g;
	while(g--){cin>>val; girls.push_back(val);}
	sort(boys.begin(),boys.end());	
	sort(girls.begin(),girls.end());	
	while(i < min(boys.size(),girls.size())){
	//	cout<<result<<endl;
	//	if(!boys[i] || !girls[j]) break;
		if(abs(boys[i]-girls[j]) < 2){i++;j++;result++;}
		else	{if(boys[i] > girls[j]) j++;		
			if(boys[i] < girls[j]) {cout<<"dfgfg"; ;i++;}	}	
		}	
	//if(boys.size())
	//cout<<endl;
	//cout<<"-----"<<i<<" "<<j<<endl;
	cout<<result;
	return 0;
	}
