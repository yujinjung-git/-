#include<stdio.h>
int gcd(int a, int b){
	int gcdNum;
	while(b){
		if(a==b){
			a=1;
		}
		else{
			gcdNum=a%b;
			a=b;
			b=gcdNum;
		}

	}
	return a;
}
int main(){
	int n,m,a;
	scanf("%d:%d", &n, &m);
	a=gcd(n,m);	
	printf("%d:%d",n/a,m/a);
}

