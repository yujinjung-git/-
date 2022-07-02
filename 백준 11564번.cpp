#include<stdio.h>
int main(){
	long long k,a,b,i;
	scanf("%lld %lld %lld", &k, &a, &b);
	if(a==0||b==0) printf("%lld", (b-a)/k+2);
	else printf("%lld", (b-a)/k+1);
}
