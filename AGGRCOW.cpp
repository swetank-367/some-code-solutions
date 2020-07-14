#include <bits/stdc++.h>
using namespace std;
long long n,c ;

int check(long long mid ,long long arr[]){
	long long pos = arr[0];
	long long cow =1 ;
	for(int i  =1  ;i< n ;i++){
		if(arr[i]-pos>=mid){
			pos = arr[i];
			cow++;
			if(cow==c)
				return 1 ;
		}
	}
	return 0 ;
}

long long bsearch(long long arr[]){
	long long l = 0 ;
	long long r =arr[n-1] ;
	long long mid ;
	long long ans = -1 ;
	while(l<=r){
		mid = (l+r)/2 ;
		if(check(mid,arr)==1){
			l = mid+1 ;
			ans = max(mid,ans);
		}
		else{
			r = mid - 1 ;
		}
	}
	return ans ;
}

int main() {
	
	// your code here
	int t ;
	cin>>t ;
	while(t--){
		cin>>n>>c;
		long long arr[n];
		for(int i = 0 ; i<n ;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		long long ans = bsearch(arr);
		cout<<ans<<endl;
	}

	return 0;
}