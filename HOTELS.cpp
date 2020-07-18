#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	long long n,m ;
	long long hotel[300010];
	cin>>n>>m ;

	for(int i= 0 ; i< n ;i++){
		cin>>hotel[i];
	}
	long long max_sum = 0 ;
	long long sum = 0;
	int k = 0 ;
	for(int i =0 ; i<n ;i++){
		
		if(sum+hotel[i]>m){
			while(sum+hotel[i]> m){
				sum = sum - hotel[k];
				k++ ;
			}
		}
		sum = sum+hotel[i];
		max_sum = max(sum,max_sum);
		if(max_sum==m)
			break ;
	}
	cout<<max_sum<<endl;

	return 0;
}