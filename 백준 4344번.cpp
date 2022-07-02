/*#include<stdio.h>
int main(){
	int i,j,k;
	double arr[1001],sum=0,cnt=0,c=0,n=0,avg=0;
	scanf("%d", &c);
	
	for(i=0; i<c; i++){
		scanf("%d", &n);
		for(j=0; j<n; j++){
			scanf("%d", &arr[j]);
			sum+=arr[j];
		}
	}
	avg=sum/n;
	for(k=0; k<n; k++){
		if(avg<arr[k]){
			cnt++;
		}
	}
	printf("%.3f%%\n", (double)(cnt/n)*100);
}*/
#include<stdio.h>
int main(){
	int c,n,i,j;
	int sum=0,num=0;
	double avg=0;
	scanf("%d", &n);
	for(i=0; i<c; i++){
		scanf("%d", &n);
		int grade[n];
		sum=0;
		for(j=0; j<n; j++){
			scanf("%d", &grade[j]);
			sum+=grade[j];
		}
		avg=(double)sum/(double)n;
		
		num=0;
		for(j=0; j<n; j++){
			if(avg<grade[j]){
				num++;
			}
			printf("%.3f%%\n", (double)num/(double)n*100);
		}
	}
}
