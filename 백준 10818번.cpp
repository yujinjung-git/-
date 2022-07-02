#include <stdio.h>
int main(){
	int n, a;
	int v[1000]={};
	int max=-1000001;
	int min=1000001;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &v[i]);
		if(v[i]<min){
			min=v[i];
		}
		if(v[i]>max){
			max=v[i];
		}
	}
	printf("%d %d", min, max);
	
	
}
