#include<stdio.h>
int gdc(int , int );
int lcm(int , int );
int main(){
	int t,a,b,i;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d %d", &a, &b);
		printf("%d %d\n", lcm(a,b), gdc(a,b));
		
	}
}
int gdc(int a, int b){
	int i,j;
	int temp;
	j=(a<b)?a:b;
	for(i=1; i<=j; i++){
		if(a%i==0 && b%i==0) temp=i;
	}
	return temp;
}
int lcm(int a, int b){
	int i,j;
	int temp;
	j=(a>b)?a:b;
	for(i=j; ; i++){
		if(i%a==0 && i%b==0){
			temp=i;
			break;
		}
	}
	return temp;
}

