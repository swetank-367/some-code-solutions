#include <bits/stdc++.h>
using namespace std;

int visited[1001][1001] ;
char grid[1001][1001] ;
int n,m ;

bool isvalid(int x,int y){
	if(x<0 || y<0 || x > n-1 || y > m-1)
	return false ;
	if(visited[x][y] == 1)
	return false ;
	
	return true ;
	
}

void bfs(int x,int y)
{
	queue<int> q ;
	q.push(x) ;
	q.push(y) ;
	visited[x][y] = 1 ;
	while(!q.empty())
	{
		int x1,y1 ;
		x1 = q.front() ;
		q.pop() ;
		y1  = q.front() ;
		q.pop() ;
		if(grid[x1][y1] == 'N'){
			if(isvalid(x1-1,y1)){
				visited[x1-1][y1] =1 ;
				q.push(x1-1);
				q.push(y1) ;
			}
		}
		if(grid[x1][y1] == 'S'){
			if(isvalid(x1+1,y1)){
				visited[x1+1][y1] =1 ;
				q.push(x1+1);
				q.push(y1) ;
			}
		}
		if(grid[x1][y1] == 'E'){
			if(isvalid(x1,y1+1)){
				visited[x1][y1+1] =1 ;
				q.push(x1);
				q.push(y1+1) ;
			}
		}
		if(grid[x1][y1] == 'W'){
			if(isvalid(x1,y1-1)){
				visited[x1][y1-1] =1 ;
				q.push(x1);
				q.push(y1-1) ;
			}
		}
		if(isvalid(x1-1,y1)){
			if(grid[x1-1][y1] == 'S'){
				visited[x1-1][y1] =1 ;
				q.push(x1-1) ;
				q.push(y1) ;
			}
		}
		if(isvalid(x1+1,y1)){
			if(grid[x1+1][y1] == 'N'){
				visited[x1+1][y1] =1 ;
				q.push(x1+1) ;
				q.push(y1) ;
			}
		}
		if(isvalid(x1,y1-1)){
			if(grid[x1][y1-1] == 'E'){
				visited[x1][y1-1] =1 ;
				q.push(x1) ;
				q.push(y1-1) ;
			}
		}
		if(isvalid(x1,y1+1)){
			if(grid[x1][y1+1] == 'W'){
				visited[x1][y1+1] =1 ;
				q.push(x1) ;
				q.push(y1+1) ;
			}
		}
	}
}

int main() {
	// your code goes here
	cin>>n>>m ;
	for(int i =0 ; i<n ; i++){
		for(int j = 0 ; j<m ;j++){
			cin>>grid[i][j] ;
		}
	}
	memset(visited,0,sizeof(visited)) ;
	int cnt = 0 ;
   for(int i =0  ;i<n ;i++)
	{
		for(int j = 0 ; j<m ; j++)
		{
			if(visited[i][j] == 0){
				visited[i][j] = 1 ;
				bfs(i,j) ;
				cnt++ ;
			}
		}
	}
	cout<<cnt<<endl;
		
	
	return 0;
}