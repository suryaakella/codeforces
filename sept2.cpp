#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		long long int n,val;
		vector<long long int> a;
		cin>>n;
		for(int i = 0; i < n; i++){cin>>val; a.push_back(val);}
		sort(a.begin(), a.end());
		long long int ans = 1;
        ans=max(a[0]*a[1]*a[2]*a[3]*a[n-1], max(a[0]*a[1]*a[n-1]*a[n-2]*a[n-3],a[n-5]*a[n-1]*a[n-2]*a[n-3]*a[n-4])); 
		cout<<ans<<endl;
		}
		return 0;
	}
