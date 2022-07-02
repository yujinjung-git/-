#include<stdio.h>
int main(){
	int c,n,arr[1000]={0},i,j,cnt=0;
	double score, avg;
	scanf("%d", &c);
	while(c--){
		scanf("%d", &n);
		for(j=0; j<n; j++){
			scanf("%d", &arr[j]);
			score+=arr[j];
		}
		avg=(double)score/n;
		
		for(j=0; j<n; j++){
			if(arr[j]>avg) cnt++;
		}
		printf("%.3lf%\n", (double)cnt/n*100);
	}
	
}
