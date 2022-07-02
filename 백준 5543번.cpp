#include<stdio.h>
int main(){
	int ham[3]={}, drk[2]={}, tot[2][3]={}, i, j, temp;
	for(i=0; i<3; i++){
		scanf("%d", &ham[i]);
	}
	for(j=0; j<2; j++){
		scanf("%d", &drk[j]);
	}
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			tot[i][j]=ham[j]+drk[i];
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<2-i; j++){
			if(tot[0][j]>tot[0][j+1]){
				temp=tot[0][j];
				tot[0][j]=tot[0][j+1];
				tot[0][j+1]=temp;
			}
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<2-i; j++){
			if(tot[1][j]>tot[1][j+1]){
				temp=tot[1][j];
				tot[1][j]=tot[1][j+1];
				tot[1][j+1]=temp;
			}
		}
	}
	if(tot[0][0]>tot[1][0]){
		printf("%d", tot[1][0]-50);
	}
	else if(tot[1][0]>=tot[0][0]){
		printf("%d", tot[0][0]-50);
	}
}
