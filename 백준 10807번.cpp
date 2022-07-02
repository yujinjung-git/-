#include <stdio.h>
int main(){
	int n, v, i;
	int x=0;
	scanf("%d", &n);
	int a[100]={};
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);	
	for(i=0; i<n; i++){
		if(v==a[i]){
			x++;
		}
	}
	printf("%d\n", x);
}
