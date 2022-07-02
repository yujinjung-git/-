#include<stdio.h>
int main(){
	int m,n,i=1,sq,sum=0,min=0;
	scanf("%d", &m);
	scanf("%d", &n);
	while((sq=i*i)<=n){
		if(sq>=m){
			sum+=sq;
			if(min==0){
				min=sq;
			}
		}
		i++;
	}
	if(sum==0){
		printf("-1");
	}
	else{
		printf("%d\n", sum);
		printf("%d", min);
	}
}

