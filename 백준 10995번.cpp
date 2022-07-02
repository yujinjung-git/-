#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%2==1){
			for(j=0; j<n; j++){
				printf("* ");
			}
		}
		else if(i%2==0){
			for(j=0; j<n; j++){
				printf(" *");
			}
		}
		printf("\n");
	}
}
