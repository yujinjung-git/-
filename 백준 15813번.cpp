#include<stdio.h>
#include<string.h>
int main(){
	int n,i,cnt=0,sum=0;
	char str[101]={""};
	scanf("%d", &n);
	scanf("%s", str);
	for(i=0; i<strlen(str); i++){
		cnt=str[i]-64;
		sum+=cnt;
	}
	printf("%d", sum);
}
