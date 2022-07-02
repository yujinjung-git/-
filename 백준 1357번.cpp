#include<stdio.h>
int rev(int n){
	int revn=0;
	while(n>0){
		revn*=10;
		revn+=n%10;
		n/=10;
	}
	return revn;
}

int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	printf("%d", rev(rev(x)+rev(y)));
}
