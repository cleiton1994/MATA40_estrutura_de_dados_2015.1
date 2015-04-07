#include <stdio.h>

main(){
	int x=10, *px;
	px = &x;
	*px = *px / 5;
	printf ("%d\n",x);

}
