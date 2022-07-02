#include<stdio.h>
int main(){
	char a[5][15];
	int i,j,k;
	for(i=0; i<5; i++){
		for(j=0; j<15; j++){
			a[i][j]=0;
		}
	}
	for(i=0; i<5; i++){
		scanf("%s", &a[i]);
	}
	for(j=0; j<15; j++){
		for(k=0; k<5; k++){
			if(a[k][j]!='\0'){
				printf("%c", a[k][j]);
			}
		}
	}
}
