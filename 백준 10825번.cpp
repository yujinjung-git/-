#include<stdio.h>
int main(){
	int n,i,j,K[100000],E[100000],M[100000];
	char name[100000];
	for(i=0; i<n; i++){
			scanf("%s %d %d %d", &name[i], &K[i], &E[i], &M[i]);
	}
	for(i=0; i<n; i++){
		printf("%s %d %d %d", name[i], K[i], E[i], M[i]);
	}
}
