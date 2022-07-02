#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	int i,n,Acnt=0,acnt=0,num=0,non=0;
	while(1){
		gets(str);
		n=strlen(str);
		for(i=0; i<n; i++){
			if('A'<=str[i]&&str[i]<='Z'){
				Acnt++;
			}
			if('a'<=str[i]&&str[i]<='z'){
				acnt++;
			}
			if('0'<=str[i]&&str[i]<='9'){
				num++;
			}
			else{
				non++;
			}
		}
		printf("%d %d %d %d\n", acnt, Acnt, num, non);
		}
	}

