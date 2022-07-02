#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j;
	char s[50]={" "};
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", &s);
		printf("String #%d\n", i+1);
		for(j=0; j<strlen(s); j++){
			if(s[j]=='Z'){
				s[j]='A';
			}
			else{
				s[j]+=1;
			}
		}
		printf("%s\n\n", s);
	}
}
