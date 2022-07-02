#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=n-i; j>0; j--){
			printf(" ");
		}
		for(k=0; k<i; k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<=n-1; i++){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(k=n-i; k>0; k--){
			printf("*");
		}
		printf("\n");
	}
}
