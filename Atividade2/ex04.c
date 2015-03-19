#include <stdio.h>
void verifica(int a,int b,int c){
	if ((a>b)&&(b>c)){
		printf("%d\n%d\n%d\n",a,b,c);
}
	else if ((c>b)&&(a>c)){
		printf("%d\n%d\n%d\n",a,c,b);
}
	else if((b>a)&&(a>c)) {
		printf("%d\n%d\n%d\n",b,a,c);
	}
	else if((b>c)&&(c>a)&&(a>c)) {
		printf("%d\n%d\n%d\n%d\n",b,c,a);
	}
	else if((c>a)&&(a>b)) {
		printf("%d\n%d\n%d\n%d\n",c,a,b);
	}
	else{
		printf("%d\n%d\n%d\n%d\n",c,b,a);
	}
}

int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	verifica(a,b,c);
	return(0);
}
