#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,k;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		
		if((k-1)|k <=n )
			cout<<k-1;
		else
			cout<<k-2;
			
		cout<<"\n";
	}
}
