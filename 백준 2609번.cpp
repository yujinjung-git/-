#include<stdio.h>
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int lcm(int a, int b){
	int i,j;
	int temp;
	j=(a>b)?a:b;
	for(i=j; ; i++){
		if(i%a==0&&i%b==0){
			temp=i;
			break;
		}
	}
	return temp;
}
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n%d", gcd(a,b), lcm(a,b));
}	

