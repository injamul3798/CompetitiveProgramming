#include <bits/stdc++.h>
using namespace std;

 
 

int main(){
	int t;             cin>>t;
	while(t--){
		int n;          cin>>n;
		int v[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		vector<int> ans;
		vector<int> ans1;
		int odd_count=0;
		int even_count=0;

		for(int i=0;i<n;i++){
			if(v[i]%2!=0){
				ans.push_back(i+1);
				odd_count++;
			}
		}
		
		if(n<3){
			cout<<"NO"<<endl;
		}
		else if(odd_count>=3){
			cout<<"YES"<<endl;
			for(int i=0;i<3;i++){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}

		else{
			for(int i=0;i<n;i++){
			    
			    if(v[i]%2==0){
				    ans1.push_back(i+1);
				    even_count++;
				    if(even_count==2){
					   break;
				    }
			     }
			 
		     }
		     if(even_count>=2 && odd_count>=1){
		     	cout<<"YES"<<endl;
		     	for(int i=0;i<n;i++){
		     		if(v[i]%2!=0){
		     			ans1.push_back(i+1);
		     			break;
		     		}
		     	}

		     	for(int i=0;i<3;i++){
		     		cout<<ans1[i]<<" ";
		     	}
		     	cout<<endl;
		     }
		     else{
		     	cout<<"NO"<<endl;
		     }
		}
	}
}





/*
1 1 2 2








5 */


