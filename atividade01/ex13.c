#include <stdio.h>
int media(float a, float b, float c){
	float result;	
	result = (a+b+c)/3;
	}
return(result)) 
}
int main(){
	float a,b,c;
	float result;
	scanf("%f %f %f",&a,&b,&c);
	result= media(a,b,c);
	printf("%.1f\n",result);
	return(0);
}
