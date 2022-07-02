#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d", &n);
	for(i=1; i<=2*n; i++){
		if(i%2==1){
			if(n%2==0){
				for(j=0; j<n/2; j++){
					printf("* ");
				}
			}
			else if(n%2==1){
				for(j=0; j<n/2+1; j++){
					printf("* ");
				}
			}
		}
		else if(i%2==0){
			for(j=0; j<n/2; j++){
				printf(" *");
			}
		}
		printf("\n");
	}
}
