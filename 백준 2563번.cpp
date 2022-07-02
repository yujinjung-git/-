#include<stdio.h>
int main(){
	int n,a,b,i,j,arr[101][101]={},cnt=0;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a,&b);
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				arr[a+i][b+j]=1;
			}
		}
	}
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			if(arr[i][j]==1)cnt++;
			
		}
	}
	printf("%d", cnt);
}
