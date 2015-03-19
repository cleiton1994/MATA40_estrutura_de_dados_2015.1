#include <stdio.h>
int soma2(int a,int b){
	int result;
	result = a+b;
	return(result);
	}
int main(){
	int a,b,result;
	scanf("%d %d",&a,&b);
	result = soma2(a,b);
	printf("%d\n",result);
	return(0);
}
