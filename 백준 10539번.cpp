#include<stdio.h>
int main(){
	int n,b[]={},a[]={},i,sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	
	a[1]=b[1];
	for(i=2; i<=n; i++){
		for(int j=1; j<i; j++){
			sum+=a[j];
		}
		a[i]=b[i]*i-sum;
	}
	for(i=1; i<=n; i++){
		printf("%d ", a[i]);
	}
	
}

