#include <stdio.h>
float media(float a, float b, float c){
	float result;	
	result = (a+b+c)/3;
	return(result);
	}
int main(){
	int a,b,c,d;
	float result;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	result = media(a,b,c,d);
	printf("%.2f\n",result);
	return(0);
}
