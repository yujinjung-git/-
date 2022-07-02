#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	int i,n;
	while(1){
		gets(str);
		n=strlen(str);
		if(n==3){
			if(str[0]=='E'&&str[1]=='N'&&str[2]=='D'){
				break;
			}
		}
		for(i=1; i<=n; i++){
			printf("%c", str[n-i]);
		}
		printf("\n");
	}
}
