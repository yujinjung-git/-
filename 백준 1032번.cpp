#include<stdio.h>
#include<string.h>
int main(){
	char str[51][51]={""};
	char c[51][51];
	int n,i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", str[i]);
	}
	c[0]=str[0];
	for(i=0; i<strlen(str[0]); i++){
		for(int j=0; j<n; j++){
			if(c[0][i]=str[j][i]){
				c[0][i]='?';
				break;
			}
		}
	}
	printf("%s", c[0]);
}
