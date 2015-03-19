#include <stdio.h>
int area(int a,int b){
	int result;
	result = a*b/2;
	return(result);
}
int main(){
	int a,b,result;
	scanf("%d %d",&a,&b);
	result = area(a,b);
	printf("%d\n",result);
	return(0);
}
