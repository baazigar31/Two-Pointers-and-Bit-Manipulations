#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define pb 				push_back


int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

		vector<int> v(6,9);
		stack<int,vector<int> > stk(v);
		// stk.push(1);
		// stk.push(2);
		// stk.push(3);
		// stk.push(4);

		// cout<<stk.top();
		cout<<stk.size();

	
	
	return 0;
}