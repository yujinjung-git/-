#include<stdio.h>
int main(){
	int arra[101][101]={},arrb[101][101]={},i,j,k,n,m,l;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &arra[i][j]);
		}
	}
	scanf("%d %d", &m, &k);
	for(i=0; i<m; i++){
		for(j=0; j<k; j++){
			scanf("%d", &arrb[i][j]);
		}
	}
	int arrc[101][101]={};
	for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			arrc[i][j]=0;
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			for(l=0; l<m; l++){
				arrc[i][j]+=arra[i][l]*arrb[l][j];
			}
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			printf("%d ", arrc[i][j]);
		}
		printf("\n");
	}
}
