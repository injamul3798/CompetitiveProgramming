#include<bits/stdc++.h>
#define ll long long int

#define e4 int main()
#define vector  std::vector<int>
using namespace std;

void run_code(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif  
}

e4{
	init_code();
	int t;         cin>>t;

	while(t--){
		int n;        cin>>n;
		int arr[n];
		ll sum_front=0;
		for(int i=0;i<n;i++){
            cin>>arr[i];
            sum_front+=arr[i];
		}
        ll sum_back=0;
        ll ans=0;
        for(int i=0;i<n-1;i++){
           sum_back+=arr[i];
           sum_front-=arr[i];
           ans=max(ans,__gcd(sum_front,sum_back));
        }

		cout<<ans<<endl;
	}
}

/*

2 2 1 3
front_sum=8
for two partition gcd will be maximum









*/