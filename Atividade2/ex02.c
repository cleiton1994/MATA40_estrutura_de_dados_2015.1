#include <stdio.h>
void media(float a, float b, float c){
	float result;	
	result = (a+b+c)/3;
	if ((result>=7)&&(result<=10)){
		printf("%.1f\n%s\n",result,"Aprovado");
}
	else if ((result>3)&&(result<7)){
		printf("%.1f\n%s\n",result,"Exame");
		printf("%s\n%.1f %s\n","Precisa de",7-result,"para passar");
}		
	else{
		printf("%.1f\n%s\n",result,"Reprovado");
	} 
}
int main(){
	float a,b,c;
	float result;
	scanf("%f %f %f",&a,&b,&c);
	media(a,b,c);
	return(0);
}
