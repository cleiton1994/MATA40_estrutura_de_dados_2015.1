#include <stdio.h>
int salario(float a){
	float result;
	result = a+(a*5/100)-(a*7/100);
	return(result);
}
int main(){
	float a,result;
	scanf("%f",&a);
	result = salario(a);
	printf("%.2f\n",result);
	return(0);
}
