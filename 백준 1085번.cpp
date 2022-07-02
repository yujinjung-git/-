#include<stdio.h>
int main(){
	int x,y,w,h;
	int r1=0,r2=0,min=0,max=0;
	scanf("%d %d %d %d", &x,&y,&w,&h);
	r1=w-x; r2=h-y;
	if(x<=r1) r1=x;
	if(y<=r2) r2=y;
	if(r1<=r2) min=r1;
	else min=r2;
	printf("%d", min);
}
