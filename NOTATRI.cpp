#include <bits/stdc++.h>
using namespace std;

long long  bsearch(long long arr[],int n ,long long sum ){
	int l = 0 ; 
	int r = n -1 ;
	int mid ;
	long long count = 0 ;
	while(l<=r){
		mid = (l+r)/2 ;
		if(arr[mid]>sum)
			{
				count+= r- mid+1 ;
				r= mid -1 ;
			}
		else{
			l = mid+1 ;
		}
	}
	return count  ;
}

int main() {
	
	// your code here
	while(true){
		int n ;
		cin>> n;
		if(n==0)
			return 0 ;
		long long arr[n];
		for(int i = 0 ; i<n ; i++)
			cin>>arr[i];
		sort(arr,arr+n);
		long long count = 0;
		for(int i = 0 ; i<n-1 ; i++){
			for(int j = i+1 ; j<n ; j++){
				long long sum = arr[i]+arr[j];
				long long check = bsearch(arr,n,sum);
				count+=check ;
				
			}
		}
		cout<<count<<endl;
	}

	return 0;
}