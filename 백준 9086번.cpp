#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char str[1000]={""};
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", &str);
		printf("%c%c\n", str[0], str[strlen(str)-1]);
	}
}
