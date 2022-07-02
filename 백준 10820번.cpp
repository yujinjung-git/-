#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	int i,j,n;
	while(1){
		gets(str);
		//printf("%s", str);
		n=strlen(str);
		for(i=1; i<=n; i++){
			printf("%c", str[n-i]);
		}
	}
}
