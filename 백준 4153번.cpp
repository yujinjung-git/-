#include<stdio.h>
int main(){
	int i,n;
	int arr[3]={0,};
	while(1){
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		
		if(arr[0]==0&&arr[1]==0&&arr[2]==0) break;
		
		int max=0;
		int tmp=0;
		
		for(i=0; i<3; i++){
			if(arr[i]>max)
				max=arr[i];
		}
		for(i=0; i<3; i++){
			if(arr[i]!=max)
				tmp+=arr[i]*arr[i];
		}
		
		if(max*max==tmp){
			printf("right\n");
		}
		else printf("wrong\n");
	}
}
