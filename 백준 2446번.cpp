#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d", &n);
	for(i=n; i>0; i--){
		for(k=0; k<n-i; k++){
			printf(" ");
		}
		for(j=2*i-1; j>0; j--){
			printf("*");
		}
		
	printf("\n");
	}
	for(i=2; i<=n; i++){
		for(k=n-i; k>0; k--){
			printf(" ");
		}
		for(j=0; j<2*i-1; j++){
			printf("*");
		}
	printf("\n");
	}
}
