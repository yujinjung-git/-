#include<stdio.h>
#include<string.h>
int main(){
	int n[]={0,}, r[]={0,};
	int i,j;
	while(1){
		scanf("%d", &n);
		if(n==0) break;
		for(i=0; i<sizeof(n)/sizeof(n[0]); i++){
			r[sizeof(n)-i-1]=n[i];
		}
		if(n==r) printf("yes\n");
		else printf("no\n");
		
	}
}
