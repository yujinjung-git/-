#include<stdio.h>
#include<string.h>
int main(){
	char a[1000000],b[100000];
	int i,sum;
	scanf("%c %c", &a, &b);
	for(i=0; i<strlen(a); i++){
		if(a[i]=='5')
			a[i]=6;
	}
	for(i=0; i<strlen(b); i++){
		if(b[i]=='5')
			b[i]=6;
	}
	
}
