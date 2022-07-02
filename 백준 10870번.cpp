#include<stdio.h>
int main(){
	int i,k,f[20];
	f[0]=0;
	f[1]=1;
	scanf("%d", &k);
	for(i=2; i<=k; i++){
		f[i]=(f[i-1]+f[i-2]);
		
	}
	printf("%d", f[k]);
	
}
