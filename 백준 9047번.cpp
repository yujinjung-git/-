#include<stdio.h>
int main(){
	char n[5]={0,};
	for(int i=0; i<4; i++)
		getchar(n);
	for(int i=0; i<4; i++){
		printf("%d ", n[i]);
	}
}
