#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((int)time(NULL));
	printf("%d", rand()%2);
}
