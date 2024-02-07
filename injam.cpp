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
#define map    map<int,int>

#define e4 int main()
using namespace std;
/*
void run_code(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif  
}  */


//Lets begin the code
e4{
    //run_code();
    int t;                         cin>>t;
    while(t--){
        int n;                      cin>>n;
        int arr[n][n-1];

        set s;
        vector temp;

        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                 cin>>arr[i][j];
                 s.insert(arr[i][j]);

            }
        }

        for(auto it = s.begin(); it !=s.end(); ++it){  
                  cout <<*it<<" ";
        }

         /*

        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                 s.insert(arr[i][j]);
            }
        }

        if(n%2==0){
              for(auto it = s.begin(); it !=s.end(); ++it){  
                  cout <<*it<<" ";
              }
              cout<<endl;
        }
        else{   
            vector final_ans(s.begin(), s.end());
            sort(final_ans.begin(), final_ans.end());
            for(int i=0;i<final_ans.size();i++){
                cout<<final_ans[i]<<" ";
            }
            cout<<endl;
        }*/
    }  
}

/*

 


n=odd
4 2 1
4 2 3
2 1 3
4 1 3

4 2 1 3
n=even
2 3 4
1 3 4
1 2 3
1 2 4

2 3 4 1


4 2 1 3
2 1 3 5
4 2 3 5
4 1 3 5
4 2 1 5

4 2 1 3 5






*/


 