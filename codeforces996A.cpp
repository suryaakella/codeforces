#include <iostream>

using namespace std;

int main(){
	long long int n,result=0;
	cin>>n;
	result+=n/100;
	n = n%100;
	result+=n/20;
	n = n%20;
	result+=n/10;
	n = n%10;	
	result+=n/5;
	n = n%5;	
	result+=n/1;
	n = n%1;
	cout<<result;
	
	return 0;
	}
