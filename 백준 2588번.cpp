#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int mul=a*b;
	printf("%d\n", a*(b%10));
	printf("%d\n", a*((b/10)%10));
	printf("%d\n", a*((b/100)));
	printf("%d", mul);
}
