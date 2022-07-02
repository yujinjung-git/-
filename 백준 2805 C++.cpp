#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int tree[1000001];
int n,m;
long long sum, ans;
long long HIGH = 1000000000;

void getTree(long long s, int e){
	if(s<=e){
		long long mid = (s+e)/2;
		sum=0;
		
		//mid보다 크면
		for(int i=0; i<n; i++){
			if(tree[i]>mid){
				sum+= tree[i]-mid;
			}
		} 
		
		if(sum>=m){
			ans=mid;
			getTree(mid+1, e);
		}
		else{
			getTree(s, mid-1);
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &tree[i]);
	}
	sort(tree, tree+n);
	getTree(0, HIGH);
	printf("%lld", ans);
	
	return 0;
}
