#include<stdio.h>
int main(){
	int i,j,sum=0,max=0,cnt=0,a,b,c,d;
	for(i=0; i<5; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum=a+b+c+d;
		if(sum>max){
			max=sum;
			cnt=i+1;
		}
	}
	printf("%d %d", cnt, max);
}
