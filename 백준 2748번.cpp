#include<stdio.h>
long long int fi(int n){
	long long int fibo[91];
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2; i<=n; i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	return fibo[n];
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%lld", fi(n));
}
