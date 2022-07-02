#include<stdio.h>
int main(){
	int n,a,b,c,d,res,cnt=0,temp;
	scanf("%d", &n);
	temp=n;
	while(1){
		a=n/10;
		b=n%10;
		c=(a+b)%10;
		d=(b*10)+c;
		n=d;
		cnt++;
		if(d==temp) break;
	}
	printf("%d", cnt);
}
