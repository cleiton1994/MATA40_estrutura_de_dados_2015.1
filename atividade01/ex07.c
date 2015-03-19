#include <stdio.h>
int converte(float a){
	int result;
	result=a*100;
	return(result);
	}
int main(){
	float a;
	int result;
	scanf("%f",&a);
	result = converte(a);
	printf("%d\n",result);
	return(0);
}
