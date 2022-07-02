#include<stdio.h>
int main(){
	int n,a,b,c,d,i,j,k,l;
	scanf("%d", &n);
	a=0, b=n-1, c=3*n-3, d=4*n-4;
	for(i=1; i<2*n; ++i){
		if(i==1||i==2*n-1){
			for(j=a; j<=b; j++) printf("*");
			for(j=b+1; j<c; j++) printf(" ");
			for(j=c; j<=d; j++) printf("*");
		}
		else{
			for(j=0; j<a; j++) printf(" ");
			printf("*");
			for(j=a+1; j<b; j++) printf(" ");
			printf("*");
			for(j=b+1; j<c; j++) printf(" ");
			if(b!=c) printf("*");
			for(j=c+1; j<d; j++) printf(" ");
			printf("*");
		}
		printf("\n");
		
		if(i<n){
			a++; b++; c--; d--;
		}		
		else{
			a--; b--; c++; d++;
		}
	}
}

