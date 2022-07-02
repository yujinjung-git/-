#include<stdio.h>
int main(){
	long long int n=0,s,i,sum=0;
	scanf("%lld", &s);
	for(i=1; ; i++){
		sum+=i;
		if(sum>s){
			break;
		}
		else{
			n++;
		}
	}
	printf("%d", n);
}

