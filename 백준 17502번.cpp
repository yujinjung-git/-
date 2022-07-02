#include<stdio.h>
int main(){
	int n,i,j;
	char c[100];
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		scanf("%1c", &c[i]);
	}
	for(i=1; i<=n; i++){
		if(c[i]=='?'){
			if(c[n+1-i]=='?'){
				c[i]='a';
				c[n+1-i]='a';
			}
			c[i]=c[n+1-i];
		}
		if(n%2==0&&c[n/2]=='?'){
			c[n/2+1]='a';
		}
		
	}
	for(i=1; i<=n; i++){
		printf("%c", c[i]);
	}
}
