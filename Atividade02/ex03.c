#include <stdio.h>

void verifica(int a,int b){
	if (a>b){
		printf("%d\n",a);
	}
	else{
		printf("%d\n",b);
	}
}
int main(){
int a,b;
	scanf("%d %d",&a,&b);
	verifica(a,b);
return(0);
}
