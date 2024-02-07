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
		 int n;                   cin>>n;
		 string s;                cin>>s;
           int one=0;
		 for(int i=0;i<n;i++){
		 	if(s[i]=='1')    one++;
		 }


		 /*


		 //11011   =3      YES

		 1001

		 2===1

		 10
		   


		 */

		 if(s=="1" || s=="10")   cout<<"NO"<<endl;
		 else if(one<=3)         cout<<"YES"<<endl;
		 else{
		 	cout<<"NO"<<endl;
		 }


		  

 


	}
}

