#include <stdio.h>
#include <string.h>
int main(){
	char str[101]="";
	scanf("%s", &str);
	int len, i;
	len=strlen(str);
	for(i=0; i<len; i++){
		if((97<=str[i])&&(str[i]<=122)){
			str[i]-=32;
		}
		else if((65<=str[i])&&(str[i]<=90)){
			str[i]+=32;
		}
	}
	printf("%s", str);
}
