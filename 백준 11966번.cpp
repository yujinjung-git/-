#include<stdio.h>
int main(){
	long long n, a=1;
	int flag=0;
	scanf("%lld", &n);
	if(n==a) printf("1");
	else{
		for(int i=0; i<30; i++){
			a*=2;
			if(n==a){
				flag=1;
				break;
			}
		}
		if(flag==1) printf("1");
		else printf("0");
	}
	return 0;
}
