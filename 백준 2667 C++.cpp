#include<cstdio>
#include<algorithm>
#include<iostream>
#include<queue>
using namespace std;

int n;
int arr[501][501];
int chk[501][501];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
vector <int> v;
int dfs(int y, int x){
	chk[y][x]=1;
	int re=1;
	for(int i=0; i<4; i++){
		int yy=y+dir[i][0], xx=x+dir[i][1];
		if(yy>=n || yy<0 || xx>=n || xx<0) continue;
		if(chk[yy][xx]==0 && arr[yy][xx]==1){
			re+=dfs(yy,xx);
		}
	}
	return re;
	
}

int main(){
	cin>>n;
	
	for(int i=0;i<n;i++){
    	string s;cin>>s;
    	for(int j=0;j<n;j++){
            arr[i][j]=s[j]-'0';
        }
    }
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(chk[i][j]==0 && arr[i][j]==1){
				v.push_back(dfs(i,j));
				//dfs(i,j);
			}
		}
	}
	sort(v.begin(), v.end());
	cout<<v.size()<<"\n";
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<"\n";
	}
	//cout<<v.size()<<"\n"<<v;
	
}
