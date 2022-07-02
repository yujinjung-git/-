#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,k;
	char str[101][14], rev[101][14];
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", str[i]);
		for(j=0; j<strlen(str[i]); j++){
			rev[i][j]=str[i][strlen(str[i])-j-1];
		}
		rev[i][strlen(str[i])]='\0';
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			int cmp=strcmp(str[i], rev[j]);
			if(cmp==0){
				printf("%d %c", strlen(str[i]), str[i][strlen(str[i])/2]);
				return 0;
			}
		}
	}
}
