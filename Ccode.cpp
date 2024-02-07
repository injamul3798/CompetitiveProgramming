
/* 

     ***************************
     *  author:Injamul         *
     *(A loser and that guy...)*
     ***************************

*/



#include<bits/stdc++.h>
#define ll long long int
 
#define set    set<int> s(n)
#define map    map<int,int> m;
#define e4 int main()
using namespace std;

void run_code(){
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif  
}



void solve(){
    ll n;                 cin>>n;

    ll ans=0;
    string s;             cin>>s;
     
    vector<ll> v;

    for(ll i=0; i<n; i++){
        ll j=i;

        ll temp=0;

        while(j<n and s[j]=='1'){


            temp++;



            j++;
        }
        v.push_back(temp);




        ans=max(ans,temp);


        i=j;
    }
    ans=v[0];


    ll mx=0;


    for(ll i=1;i<v.size(); i++){


        mx=max(mx,v[i]);
    }

    
    cout<<ans+mx<<endl;
    
    
}


//Lets begin the code
e4{
	run_code();
	int t;                         cin>>t;
	while(t--){
		 solve();

	}
}



 









