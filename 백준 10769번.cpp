#include<stdio.h>
#include<string.h>
int main(){
	int i,j,hc=0,sc=0;
	char str[256]={""};
	gets(str);
	for(i=0; i<strlen(str)-2; i++){
		if(str[i]==':'&&str[i+1]=='-'&&str[i+2]==')') hc++;
		else if(str[i]==':'&&str[i+1]=='-'&&str[i+2]=='(') sc++;
	}
	if(hc==0&&sc==0) printf("none");
	else if(hc==sc) printf("unsure");
	else if(hc>sc) printf("happy");
	else if(sc>hc) printf("sad");
}

