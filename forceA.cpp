/* 

     ***************************
     *  author:Injamul         *
     *  An average Guy........)*
     ***************************

*/



#include<bits/stdc++.h>
#define ll long long int
#define vector vector<int>
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


//Lets begin the code
e4{
	run_code();
	int t;                           cin>>t;
	 while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
        int max_val = s - r; // maximum value of the stolen die

        

        cout<<max_val<<" ";
        int second_sec=r%(n-1);
        int third_sec=r/(n-1);
        /*


1 1
n-1=3
4 9 5   ans1=4

rem=5%3=2
mid=5/3=1

4 2 1 2


2 4 2
n-1=1
rem=2%1=0
mid=2

3 


3 15 10=5

mod=10%2=0
10





        */


        for(int i=1;i<n;i++){


            if(second_sec>0){
                cout<<third_sec+1<<" ";
                second_sec--;
            }


            else{
                cout<<third_sec<<" ";
            }
        }
        cout<<endl;
    }
     

    return 0;
}
