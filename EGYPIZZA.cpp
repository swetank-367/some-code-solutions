#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int n;
	cin>>n;
	int co1 = 0;
	int co2 = 0;
	int co3 = 0;
	while(n--){
		string s ;
		cin>>s;
		if(s=="1/2")
		    co2++;
	    else if(s=="1/4")
	        co1++;
	    else
	        co3++;
	}
	
	co1 = max(0,co1-co3);
	if(co2%2==0){
		co2 = co2/2 ;
	}
	else{
		co2 = (co2/2)+1 ;
		co1 = max(0,co1-2);
	}
	if(co1%4==0)
		co1 = co1/4;
	else
		co1 = (co1/4)+1 ;
	cout<<(co1+co2+co3+1)<<endl;
	
	
	return 0;
}