#include<stdio.h>
int main(){
	int i,j,arr[3][4]={},cnt[3]={};
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j]==0) cnt[i]+=1;
		}
	}
	for(i=0; i<3; i++){
		if(cnt[i]==0) printf("E\n");
		else if(cnt[i]==1) printf("A\n");
		else if(cnt[i]==2) printf("B\n");
		else if(cnt[i]==3) printf("C\n");
		else if(cnt[i]==4) printf("D\n");
	}
}
