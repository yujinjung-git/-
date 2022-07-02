#include<stdio.h>
#include<string.h>
int main(){
	char str[100]={""};
	int i;
	scanf("%s", &str);
	for(i=0; i<strlen(str); i++){
		printf("%c", str[i]);
		if(i==9||i==19||i==29||i==39||i==49||i==59||i==69||i==79||i==89||i==99) printf("\n");
	}
}
