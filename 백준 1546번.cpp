#include<stdio.h>
int main(){
	int n,i;
	double arr[1000]={0,},max=0,total=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%lf", &arr[i]);
		if(arr[i]>max) max=arr[i];
		}
	for(i=0; i<n; i++){
		arr[i]=arr[i]/max*100.0;
		total+=arr[i];
	}
	printf("%.2lf", (total/(double)n));
}
	
