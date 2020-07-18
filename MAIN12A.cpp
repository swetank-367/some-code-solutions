#include <iostream>
using namespace std;

int main() {
	
	// your code here

	int arr[1000001];
	arr[0]=1;
	int i =1 ;
	int k =0 ;
	int c = 2;
	while(i<1000001)
	{
		for(int j =1 ; j<=arr[k] ;j++)
		{
			arr[i]=c;
			i++;
			if(i>1000000)
				break;
		}
		c++;
		k++;
	}
	int t ;
	cin>>t;
	

	for(int i =1 ; i<=t ;i++)
	{
	    int n;
	  cin>>n;
	
		cout<<"Case #"<<i<<": "<<arr[n-1]<<endl;
	}

	return 0;
}