#include<stdio.h>
#include<string.h>
struct yjj{
	char school;
	long long int c;
};


int main(){
	
	int t,n,i,j,big=0,ib;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		
		scanf("%d", &n);
		yjj *yj = new yjj[100];

		for(j=0; j<n; j++){
			scanf("%s %lld", yj[j].school, yj[j].c);
			if(big<yj[j].c){
				big=yj[j].c;
				ib=j;
			}
		}
		printf("%s\n", yj[ib].school);
	}
}
//[Error] no match for 'operator[]' (operand types are 'yjj' and 'int')
