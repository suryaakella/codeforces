#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
	long long int n,a,b,c,max = 0,x,y,z,lhs;
	cin>>n>>a>>b>>c;
	for(x = 0; x <=n; x++){
		for(y = 0; y<= n;y++){
				lhs = n - x*a - y*b;
				if(lhs < 0) continue;				
				z = lhs/c;
				if(lhs == c*z){
					if(max < (x+y+z)) {max = (x+y+z);}
					}
				}
			}
		cout<<max;
	return 0;
	}

