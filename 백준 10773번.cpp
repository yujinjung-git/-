#include<stdio.h>
int main(){
	int arr[100000]={0,},i,k,cnt=0,sum=0;
	long long int num=0;
	scanf("%d", &k);
	int real[k];
	for(i=0; i<k; i++){
		scanf("%d", &real[i]);
		if(real[i]==0){
			cnt--;
			arr[cnt]=0;
		}
		else{
			arr[cnt]=real[i];
			cnt++;
		}
	}
	for(i=0; i<cnt; i++){
		sum+=arr[i];
	}
	printf("%d", sum);	
}
