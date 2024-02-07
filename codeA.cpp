/* 

     ***************************
     *  author:Injamul         *
     *(A loser and that guy...)*
     ***************************

*/



#include<bits/stdc++.h>
#define ll long long int
#define vector vector<int>
#define set    set<int> 
#define map    map<int,int> m;
#define e4 int main()
using namespace std;

void run_code(){
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif  
}


//Lets begin the code
e4{
	run_code();
	int t;                         cin>>t;
	while(t--){
		 int a,b,c,d;             cin>>a>>b>>c>>d;

		 set s;
		 for(int i=a;i<=b;i++){
		 	s.insert(i);
		 }

		  for(int i=c;i<=d;i++){
		 	s.insert(i);
		 }

		 cout<<s.size()<<endl;


		  

	}
}

 



