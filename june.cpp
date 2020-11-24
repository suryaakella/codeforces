#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int t, n, k;
	string input;
	int result,count;
	cin>>t;
	while(t--){
		cin>>n>>k;	
		cin>>input;
		result=1;
		count=0;
//		for(int i = 0 ; i < k+1 ; i++){
//			if(input[i] == '0') count++;
//			else count=0;
//			if(count == k+1) result++; 
//			}
//		count=0;;
		for(long long int i = 0 ; i < n; i++){
			if(input[i] == '0') count++;
			else count=0;
			if(count == (k*2)+1) result++; 
			}
//		count=0;
//		for(int i = n-k ; i < n ; i++){
//			if(input[i] == '0') count++;
//			else count=0;
//			if(count == k+1) result++; 
//			}
		cout<<result<<endl;
		}
	return 0;
	}
