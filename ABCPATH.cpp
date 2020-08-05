#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	char grid[50][50] ;
	int dist[50][50] ;
	int visited[50][50] ;
	int m1[] = {-1,0,1,1,1,0,-1,-1};
	int m2[] = {-1,-1,-1,0,1,1,1,0};
	int test = 0 ;
	while(true)
	{
		test++ ;
		int max = 0;
		int h,w ;
		cin>>h>>w; 
		if(h==0 && w==0)
			return 0 ;
		queue<pair<int,int>> q; 
		memset(visited,0,sizeof(visited));
		memset(dist,0,sizeof(dist));
		for(int i= 0 ; i< h ;i++)
		{
			for(int j = 0 ; j<w ;j++)
			{
				cin>>grid[i][j] ;
				if(grid[i][j]=='A')
				{
					q.push(make_pair(i,j));
					dist[i][j] = 1;
					max = 1 ;
				}
			}
		}
	

		while(!q.empty())
		{
			pair<int,int> n = q.front() ;
			q.pop();
			for(int k = 0 ; k<8 ; k++)
			{
				int x = n.first + m1[k] ;
				int y = n.second + m2[k] ;
				if ( x >= 0 && x < h && y >= 0 && y < w && (grid[x][y] == (grid[n.first][n.second] + 1)) )
				{
					if(!visited[x][y])
					{
						visited[x][y] = 1 ;
						q.push(make_pair(x,y)) ;
						dist[x][y] = dist[n.first][n.second]+1 ;
						if(dist[x][y]>max)
							max = dist[x][y] ;
					}
				}
				
			}
			
		}
		cout<<"Case "<<test<<": "<<max<<endl;
	}

	return 0;
}