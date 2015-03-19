#include <stdio.h>
void media(float a, float b, float c){
	float result;	
	result = (a*2+b*3+c*5)/10;
	if ((result>8)&&(result<=10)){
		printf("%.1f\n%s\n",result,"A");
}
	else if ((result>7)&&(result<=8)){
		printf("%.1f\n%s\n",result,"B");
}		
	else if ((result>6)&&(result<=7)){
		printf("%.1f\n%s\n",result,"C");
}	
	else if ((result>5)&&(result<=6)){
		printf("%.1f\n%s\n",result,"D");
}		
	else{
		printf("%.1f\n%s\n",result,"E");
	} 
}
int main(){
	float a,b,c;
	float result;
	scanf("%f %f %f",&a,&b,&c);
	media(a,b,c);
	return(0);
}
