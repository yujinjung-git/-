#include<stdio.h>
int main(){
	int t,a,b,i,j,n,temp;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d %d", &a, &b);
		n=(a>b)?a:b;
		for(j=n; ; j++){
			if(j%a==0&&j%b==0){
				temp=j;
				break;
			}
		}
		printf("%d\n", temp);
	}
}
