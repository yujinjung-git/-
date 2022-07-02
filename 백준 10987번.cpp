#include<stdio.h>
#include<string.h>
int main(){
	char c[100]={""};
	int i,cnt=0;
	scanf("%s", &c);
	for(i=0; i<strlen(c); i++){
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
			cnt++;
		}
	}
	printf("%d", cnt);
}
