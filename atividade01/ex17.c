#include <stdio.h>
int salario(float a){
	float result;
	result = a+50-(a*10/100);
	return(result);
}
int main(){
	float a,result;
	scanf("%f",&a);
	result = salario(a);
	printf("%.2f\n",result);
	return(0);
}
