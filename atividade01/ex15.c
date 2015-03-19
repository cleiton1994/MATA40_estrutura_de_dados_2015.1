#include <stdio.h>
int salario(float a,float b){
	float result;
	scanf("%f",&b);
	result = a+(a*b/100);
	return(result);
}
int main(){
	float a,b,result;
	scanf("%f",&a);
	result = salario(a,b);
	printf("%.2f\n",result);
	return(0);
}
