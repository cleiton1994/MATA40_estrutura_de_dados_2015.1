#include <stdio.h>

void verifica(int i,float a,float b,float c){
	int aux;
	if (i==1){
		if(a > b){
			aux = b;
			b = a;
			a = aux;
		}
		if(b > c){
			aux = c;
			c = b;
			b = aux;		
		}
		if(a > b){
			aux = b;
			b = a;
			a = aux;
		}
	printf("%.2f %.2f %.2f",a,b,c);
	}
	else if (i==2){
		if(a > b){
			aux = b;
			b = a;
			a = aux;
		}
		if(b > c){
			aux = c;
			c = b;
			b = aux;		
		}
		if(a > b){
			aux = b;
			b = a;
			a = aux;
		}
	printf("%.2f %.2f %.2f",c,b,a);
}
	else{
		if(a > b){
			aux = b;
			b = a;
			a = aux;
		}
		if(b < c){
			aux = c;
			c = b;
			b = aux;		
		}
	printf("%.2f %.2f %.2f",c,a,b);	
	}
}
int main(){
int i;
float a,b,c;
scanf("%d",&i);
scanf("%f %f %f",&a,&b,&c);
	verifica(i,a,b,c);
return(0);
}
