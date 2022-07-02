#include<stdio.h>
int main(){
	int n, i;
	long long int cnt=0;
	char omsg[100000]={0,};
	char nmsg[100000]={0,};
	
	scanf("%d", &n);
	scanf("%s %s", omsg, nmsg);
	
	for(i=0; i<n; i++){
		if(omsg[i]!nsmsg[i]) cnt+=1;
	}
	
	printf("%lld", cnt);
}
