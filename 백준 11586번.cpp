#include<stdio.h>
int main(){
	int n,k,i,j;
	char arr[101][101]={};
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", arr[i]);
	}
	scanf("%d", &k);
	if(k==1){
		for(i=0; i<n; i++){
			printf("%s\n", arr[i]);
		}
	}
	else if(k==2){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("%c", arr[i][n-j-1]);
			}
			printf("\n");
		}
	}
	else if(k==3){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("%c", arr[n-i-1][j]);
			}
			printf("\n");
		}
	}
}
