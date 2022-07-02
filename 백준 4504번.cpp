#include <stdio.h>
int main(){
	int n, a;
	scanf("%d", &n);
	while(1){
		scanf("%d", &a);
		if(a==0){
			break;
		}
		if(a%n==0){
			printf("%d is a multiple of %d.\n",a,n);
		}
		if(a%n!=0){
			printf("%d is NOT a multiple of %d.\n",a,n);
		}
	}
} 
