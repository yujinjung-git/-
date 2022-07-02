#include<stdio.h>
#include<string.h>
int main(){
	int arr[301][301]={},n,m,k,i,j,l;
	long long int sum=0;
	int a,b,c,d;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &k);
	for(i=0; i<k; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for(j=a; j<=c; j++){
			for(l=b; l<=d; l++){
				sum+=arr[j-1][l-1];
			}
		}
		printf("%lld\n", sum);
		sum=0;
	}
}
