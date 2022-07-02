#include<stdio.h>
int main(){
	int n,x[100000],y[100000],i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	for(i=0; i<n-i-1; i++){
		int tmpx, tmpy;
		if(y[i]!=y[i+1]){
			if(y[i]>y[i+1]){
				tmpx=x[i];
				x[i]=x[i+1];
				x[i+1]=tmpx;
				tmpy=y[i];
				y[i]=y[i+1];
				y[i+1]=tmpy;
			}
		}
		else{
			if(x[i]>x[i+1]){
				tmpx=x[i];
				x[i]=x[i+1];
				x[i+1]=tmpx;
				tmpy=y[i];
				y[i]=y[i+1];
				y[i+1]=tmpy;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d %d\n", x[i], y[i]);
	}
}
