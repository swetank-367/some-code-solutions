#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int arr[1000] ;
	while(true){
		int n ;
		cin>>n ;
		if(n==0)
			return 0 ;
		for(int i= 0 ; i<n ; i++){
			cin>>arr[i];
		}
		int flag = 1;
		stack <int> side ;
		side.push(0);
		int m = 1;
		for(int i =0 ; i<n ; i++){
			if(arr[i]==m){
				m++ ;
			}

			else{
				side.push(arr[i]);
			}
			if(side.top()==m){
				while(side.top()==m){
				m++ ;
				side.pop() ;
				}
			}
		}
		while(side.size()!=1){
			if(side.top() == m){
				side.pop() ;
				m++ ;
			}
			else{
				flag = 0 ;
				break ;
			}
		}
		if(flag==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}

	return 0;
}