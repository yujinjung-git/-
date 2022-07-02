#include<cstdio>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;

int n,m;
int arr[101][101];
int chk[101][101];
int ans[101][101];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
vector <int> v;

int bfs(int a, int b){
	queue<pair<int,int> > q;
	q.push({a,b});
	chk[a][b]=1;
	ans[0][0]=1;
	while(!q.empty()){
		int y=q.front().first, x=q.front().second;
		if(y==n-1 && x==m-1){
			return ans[y][x];
		}
		q.pop();
	
		for(int i=0; i<4; i++){
			int yy=y+dir[i][0], xx=x+dir[i][1];
			if(yy<0 || yy>=n || xx<0 || xx>=m) continue;
			
			if(chk[yy][xx]==0 && arr[yy][xx]==1){
				ans[yy][xx]=ans[y][x]+1;
				chk[yy][xx]=1;
				q.push({yy,xx});	
			}
		}
	}
	return ans[n-1][m-1];
}
		



int main(){
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
    	string s;cin>>s;
    	for(int j=0;j<m;j++){
            arr[i][j]=s[j]-'0';
        }
    }

	cout<<bfs(0,0);	
}
