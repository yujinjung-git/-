#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d", &n);
	for(i=n; i>0; i--){
		for(j=n; j>=i; j--){
			printf("*");
		}
		for(k=2*i-2; k>0; k--){
			printf(" ");
		}
		for(j=n; j>=i; j--){
			printf("*");
		}
	printf("\n");
	}
	for(i=1; i<n; i++){
		for(j=n-1; j>=i; j--){
			printf("*");
		}
		for(k=0; k<=2*j+1; k++){
			printf(" ");
		}
		for(j=n; j>i; j--){
			printf("*");
		}
	printf("\n");
	}
}
