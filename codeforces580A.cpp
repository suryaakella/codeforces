#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long long int N,val,max=0,count=1;
	vector <long long int> vec; 
	cin>>N;
	if(N==1) {cin>>val; cout<<1; return 0;}
	while(N--){cin>>val; vec.push_back(val);}
	for(int i = 0 ; i <=(vec.size()-2); i++){
		if(vec[i]<=vec[i+1]){count++;}
		else if(vec[i] > vec[i+1]) count = 1;
		if(max<count) max = count;
		}
	cout<<max;
	return 0;
	}
