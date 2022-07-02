#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char str[31];
	scanf("%d", &n);
	getchar();
	for(i=0; i<n; i++){
		gets(str);
		if(97<=str[0]&&str[0]<=122){
			str[0]-=32;
		}
		printf("%s\n", str);
	}
}
