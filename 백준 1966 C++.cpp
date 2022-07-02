#include<cstdio>
#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		queue< pair<int,int> >q; //first: 중요도, second: 순서 
		vector<int> v; //중요도 정렬 
		for(int i=0; i<n; i++){
			int x; cin>>x;
			q.push({x,i});
			v.push_back(x);
		} 
		sort( v.begin(), v.end() );
		int chk=0;
		while(1){
			if(q.front().first==v[q.size()-1]){
				if(q.front().second==m){
					cout<<chk+1<<"\n";
					break;
				}
				else{
					q.pop();
					chk++;
				}
			}
			else{
				q.push(q.front());
				q.pop();
			}
		}
		
	}
}
