#include<stdio.h>
int main(){
	int n,i,c;
	int cute=0, nocute=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &c);
		if(c==1){
			cute+=1;
		}
		else{
			nocute+=1;
		}
	}
	if(cute>nocute){
		printf("Junhee is cute!");
	}
	else{
		printf("Junhee is not cute!");
	}
}
