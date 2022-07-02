#include<stdio.h>
int main(){
	int i,j,sum=0,m,n,min=0;
	scanf("%d %d", &m, &n);
	for(i=m; i<=n; i++){
		if(i==1){
			continue;
		}
		for(j=2; j<i; j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			if(sum==0) min=i;
			sum+=i;
			
		}
			
			
	}
	if(sum>0){
		printf("%d\n%d", sum, min);
	}
	else{
		printf("-1");
	}	
}
