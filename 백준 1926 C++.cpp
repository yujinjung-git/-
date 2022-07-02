#include<cstdio>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;

int n,m;
int arr[501][501];
int chk[501][501];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
vector <int> v;
int dfs(int y, int x){
	chk[y][x]=1;
	int re=1;
	for(int i=0; i<4; i++){
		int yy=y+dir[i][0], xx=x+dir[i][1];
		if(yy>=n || yy<0 || xx>=m || xx<0) continue;
		if(chk[yy][xx]==0 && arr[yy][xx]==1){
			re+=dfs(yy,xx);
		}
	}
	return re;
	
}

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(chk[i][j]==0 && arr[i][j]==1){
				v.push_back(dfs(i,j));
				//dfs(i,j);
			}
		}
	}
	sort(v.begin(), v.end());
	if(v.size()==0){ /// vextor의 size가 0인 경우 에는 v[v.size()-1]가 값이 없어서 에러가 나요;; 예외처리 해주면 됩니다.
        cout<<0<<"\n"<<0;
    }
    else{
        cout<<v.size()<<"\n"<<v[v.size()-1];
    }


}
