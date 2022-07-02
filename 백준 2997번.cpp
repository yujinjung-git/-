#include<stdio.h>
int main(){
	int arr[3]={}, n1, n2, i, j, temp, ans;
	for(i=0; i<3; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	n1=arr[1]-arr[0];
	n2=arr[2]-arr[1];
	if(n1>n2){
		ans=arr[0]+n2;
	}
	else if(n2>n1){
		ans=arr[1]+n1;
	}
	else if(n1=n2){
		ans=arr[2]+n1;
	}
	printf("%d", ans);
}

