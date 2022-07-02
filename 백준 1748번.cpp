#include<stdio.h>
int main(){
	long n;
	int i,j,len=1,totlen=0,spot=1;
	scanf("%ld", &n);
	for(i=1; i<=n; i++){
		if(i==spot*10){
			spot*=10;
			len++;
		}
		totlen+=len;	
	}
	printf("%d", totlen);
}
