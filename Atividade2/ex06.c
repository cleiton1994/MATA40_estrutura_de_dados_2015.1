#include <stdio.h>

void verifica(int a){
	if (a%2==0){
		printf("%s\n","par");
	}
	else{
		printf("%s\n","impar");
	}
}
int main(){
int a;
	scanf("%d",&a);
	verifica(a);
return(0);
}
