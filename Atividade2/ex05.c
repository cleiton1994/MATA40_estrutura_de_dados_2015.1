#include <stdio.h>
void verifica(int a,int b,int c,int d){
	int aux;
	if(d > c){
		aux = c;
		c = d;
		d = aux;
}
	if(c > b){
		aux = c;
		c = b;
		b = aux;		
}
	if(b > a){
		aux = b;
		b = a;
		a = aux;
}
	if(d > c){
		aux = d;
		d = c;
		c = aux;
}
	if(c > b){
		aux = c;
		c = b;
		b = aux;		
}
	if(d > c){
		aux = c;
		c = d;
		d = aux;
}
printf("%d\n%d\n%d\n%d\n", a,b,c,d);
}

int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	verifica(a,b,c,d);
	return(0);
}
