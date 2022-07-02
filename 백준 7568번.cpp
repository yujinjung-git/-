#include<stdio.h>
int main(){
	int n,x[50],y[50],i,j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	for(i=0; i<n; i++){
		int k=0;
		for(j=0; j<n; j++){
			if(x[i]<x[j]&&y[i]<y[j]){
				k++;
			}
		}
		printf("%d ", k+1);
	}
}
