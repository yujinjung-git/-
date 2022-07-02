#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s[9]={'C','A','M','B','R','I','D','G','E'};
	char str[100]=" ";
	int i,j,idx[100]={0,},length;
	scanf("%s", &str);
	for(i=0; i<strlen(str); i++){
		for(j=0; j<9; j++){
			if(s[j]==str[i]){
				str[i]='0';
			}
		}
	}
	
	for(i=0; i<strlen(str); i++){
		if(str[i]!='0'){
			printf("%c", str[i]);
		}
	}
}

