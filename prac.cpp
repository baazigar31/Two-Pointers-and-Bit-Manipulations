#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define pb 				push_back


int helper(vector<int> &nums){
	int n=nums.size();
	int count=0;
	cout<<"dhksdhskhd";
	for(int i=0;i<n;i++){
		cout<<"dhdhhdkshdkkakaalalal";
		int j=0;
		int even=0;
		int odd=0;
		int k=1;
		
		while(j<i){
			even=even+nums[j];
			j+=2;
		}
		// j=i+1;
		while(k<i){
			odd=odd+nums[k];
			k+=2;
		}

		if(i&1){
			k=i+1;
			while(k<n){
				// odd=odd+nums[j+1];
				odd=odd+nums[k];
				k+=2;
			}


		}else{
			k=i+2;
			while(k<n){
				odd=odd+nums[k];
				k+=2;
			}
			
		}

		if(i&1){
			j=i+2;
			while(j<n){
				// odd=odd+nums[j+1];
				even=even+nums[j];
			}


		}else{
			j=i+1;
			while(j<n){
				even=even+nums[j];
				j+=2;
			}
			
		}
		cout<<odd<<" "<<even;
		cout<<"hsjdhj";
		if(odd==even){
			count+=1;
		}


		
	}
	cout<<count;
	return count;

}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

		vector<int> nums;
		nums.push_back(2);
		nums.push_back(1);
		nums.push_back(6);
		nums.push_back(4);

		// for(int i=0;i<nums.size();i++){
		// 	cin>>nums[i];
		// }

		int ans=helper(nums);

		cout<<ans;


	
	
	return 0;
}