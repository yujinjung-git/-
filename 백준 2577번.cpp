#include<stdio.h>
int main(){
	int a,b,c, arr[10]={0}, tmp;
	scanf("%d %d %d", &a, &b, &c);
	tmp=a*b*c;
	while(tmp!=0){
		arr[tmp%10]++;
		tmp=tmp/10;
	}
	for(int i=0; i<10; i++){
		printf("%d\n", arr[i]);
	}
	
}

