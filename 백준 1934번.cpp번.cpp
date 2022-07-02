#include<stdio.h>
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	int t,n1,n2,gcm,result,c;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d %d", &n1, &n2);
		gcm=gcd(n1,n2);
		result=gcm*(n1/gcm)*(n2/gcm);
		printf("%d\n", result);		
	}	
}
