#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j;
	char str, rev;
	while(scanf("%c", str)!='END'){
		for(i=0; i<strlen(str); i++){
			for(j=0; j<strlen(str); j++){
				rev[i]=str[strlen(str)-j-1];
			}
			printf("%s", rev);
		}
	}
}
