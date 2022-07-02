#include<stdio.h>
int main(){
	int arr[9]={},cnt=0,dcnt=0,i;
	for(i=1; i<=8; i++){
		scanf("%d", &arr[i]);
	}
	for(i=1; i<=8; i++){
		if(arr[i]==i) cnt++;
		else if(arr[i]==9-i) dcnt++;
	}
	if(cnt==8) printf("ascending");
	else if(dcnt==8) printf("descending");
	else printf("mixed");
}

