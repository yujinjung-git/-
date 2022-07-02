#include<stdio.h>
int main(){
	int a,b,A,B,C,D,newA,newB,E,F,G,H;
	scanf("%d %d", &a, &b);
	A=a/100; //7
	B=a%100;
	C=B/10; //3
	D=B%10; //4
	newA=(D*100)+(C*10)+A;
	
	E=b/100; //7
	F=b%100;
	G=F/10; //3
	H=F%10;
	newB=(H*100)+(G*10)+E;
	
	if(newA>newB) printf("%d", newA);
	else printf("%d", newB);
	
}
