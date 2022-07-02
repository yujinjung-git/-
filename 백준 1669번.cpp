#include<stdio.h>
int main(){
	unsigned long int monkey, dog, n, cnt=0;
	
	
	scanf("%lu %lu", &monkey, &dog);
	n=dog-monkey;
	
	if(n<1) {
		printf("%d", 0);
		return 0;
	}
	
	while(cnt*cnt<n){
		++cnt;
	}
	
	if(cnt*cnt-cnt<n){
		printf("%lu", cnt*2-1);
	}
	
	else{
		printf("%lu", cnt*2-2);
	}
}
