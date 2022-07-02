#include<stdio.h>
int main(){
	int a,b,c,n,i;
	scanf("%d %d %d", &a, &b, &n);
	for(i=0; i<n; i++){
		a%=b;
		a*=10;
		c=a/b;
	}
	printf("%d",c);
}

