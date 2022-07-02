#include<stdio.h>
int tree[1000001];

int main(){
	int n,m;
	int max=0;
	int front, rear, mid;
	int res=0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &tree[i]);
		if(max<tree[i]) max=tree[i];
	}
	front=0, rear=max;
	while(front<=rear){
		int mid=(front+rear)/2;
		int sum=0;e
		for(int i=0; i<n; i++){
			if(mid<tree[i]){
				sum+=tree[i]-mid;
			}
		} 
		if(sum>=m){
			if(res<mid) res=mid;
			front=mid+1;
		}
		else{
			rear=mid-1;
		}
	}
	printf("%d", res);
	
}
