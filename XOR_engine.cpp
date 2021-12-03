#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define pb 				push_back
#define endl			'\n'


int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

		int t;
		cin>>t;
		while(t--){
			int n,q;
			cin>>n>>q;
			vector<int> arr(n+1);
			int odd=0,even=0;
			for(int i=0;i<n;i++){
				cin>>arr[i];
				if(__builtin_popcount(arr[i])&1){
					odd++;
				}
				else{
					even++;
				}
			}
			while(q--){
				int p;
				cin>>p;
				if(__builtin_popcount(p)&1){
					cout<<odd<<" "<<even<<endl;
				}else{
					cout<<even<<" "<<odd<<endl;
				}

			

		}

	
	
}
	return 0;
}