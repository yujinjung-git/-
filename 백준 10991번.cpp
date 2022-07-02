#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n-i; j++){
			printf(" ");
		}
		printf("*");
		if(i>=2){
			for(j=1; j<i; j++){
				printf(" *");
			}
		}
		printf("\n");
	}
}
