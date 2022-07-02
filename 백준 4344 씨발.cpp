#include<stdio.h>
int main(){
	int c=0, n=0;
	scanf("%d", &c);
	for(int i=0; i<c; i++){
		scanf("%d", &n);
		int score[1001];
		int sum=0;
		double avg=.0;
		
		for(int j=0; j<n; j++){
			scanf("%d", &score[j]);
			sum+=score[j];
		}
		avg=(double)sum/n;
		int cnt=0;
		for(int j=0; j<n; j++){
			if(avg<score[j]){
				cnt++;
			}
		}
		printf("%.3f%%\n", (double)cnt*100/n);
	}
}
