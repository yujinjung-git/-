#include<stdio.h>
int main(){
	int n,i,j,k,a=1,b;
	scanf("%d", &n);
	i=n; k=2*i-1;
	for(i=1; i<=n; i++){
		for(j=0; j<n-i; j++){
			printf(" ");
		}
		
		for(j=1; j<=2*i-1; j++){
			printf("*");
		}
	printf("\n");
	}
	
	for(b=1; b<=n-1; b++){
		for(j=0; j<b; j++){
			printf(" ");
		}
		for(j=0; j<2*(n-b)-1; j++){
			printf("*");
		}
	printf("\n");
	}
}
	
	


