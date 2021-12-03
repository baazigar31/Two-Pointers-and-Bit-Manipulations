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
			int n;
			cin>>n;
			std::vector<int> a(n+1);
			int ans=0;
			for(int i=0;i<n;i++){
				cin>>a[i];
				ans^=a[i];
			}
			cout<<ans<<endl;

		}

	
	
	return 0;
}