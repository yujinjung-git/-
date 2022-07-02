/*#include<stdio.h>
#include<string.h>
int main(){
	int arr[26]={-1}, i,j;
	char str[101];
	
	scanf("%s", str);
	
	for(i=0; i<strlen(str); i++){
		if(arr[str[i]-97]==-1){
			arr[str[i]-97]=i;
			}
	}
	
	for(i=0; i<26; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[26]={0,}, i, j;
	char str[100];
	
	scanf("%s", str);
		
	for(i='a'; i<='z'; i++)
	{
		for(j=0; j<strlen(str); j++)
		{
			if(i==str[j])
			{
				arr[i-'a'] = j+1;
				break;
			}
		}
	}
	
	for(i=0; i<26; i++)
	{
		printf("%d ", arr[i]-1);
}
}
