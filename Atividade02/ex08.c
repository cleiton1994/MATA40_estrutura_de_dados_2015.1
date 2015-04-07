#include <stdio.h>
#include <stdlib.h>


void calculadora(int i){
	if (i==1){
		int a,b;
		scanf("%d %d",&a,&b);
		printf ("%d",a+b);
	}
	else if (i==2){
		int a,b;
		scanf("%d %d",&a,&b);
		printf ("%d",a-b);
	}
	else if (i==3){
		int a,b;
		scanf("%d %d",&a,&b);
		printf ("%d",a*b);
	}
	else if (i==4){
		int a,b;
		scanf("%d %d",&a,&b);
		printf ("%d",a/b);
	}
	
	else{
		int a;
		printf ("%d",sqrt(a));
	}
}
int main(){
	
	int a,b;
	int i;
	scanf ("%d",&i);
	calculadora(i);
	return(0);
}

