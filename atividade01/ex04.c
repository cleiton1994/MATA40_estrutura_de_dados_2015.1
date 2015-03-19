#include <stdio.h>
int soma4(int a,int b,int c,int d){
	int result;
	result = a+b+c+d;
	return(result);
	}
int main(){
	int a,b,c,d,result;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	result = soma4(a,b,c,d);
	printf("%d\n",result);
	return(0);
}
