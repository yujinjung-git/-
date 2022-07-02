#include<stdio.h>
int main(){
	int n,m,a[100000]={0,},i,t;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &t);
		a[t]=1;
	}
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &t);
		if(a[t]==1) printf("1\n");
		else printf("0\n");
	}
	return 0;
}
