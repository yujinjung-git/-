#include<stdio.h>
int main(){
	int n,i,j,arr[]={1,};
	while(scanf("%d", &n)!=EOF){
		for(i=1; i<=n; i++){
			for(j=1; j<=n; j++){
				arr[i]*=j;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%5d -> %d", n, arr[i]);
	}
}
