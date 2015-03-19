#include <stdio.h> 
void data(int dia, int mes, int ano, int dia1, int mes1, int ano1){
	
	if(ano1 > ano){
		printf("%d %d %d\n",dia1, mes1, ano1);
	}
	else if(ano1 < ano){
		printf("%d %d %d\n",dia, mes, ano);
	}else{
		if(mes1 > mes){
			printf("%d %d %d\n",dia1, mes1, ano1); 	
		}else if(mes1 < mes){
			printf("%d %d %d\n",dia, mes, ano); 	
		}else{
			if(dia1 > dia){
				printf("%d %d %d\n",dia1, mes1, ano1); 					
			}else{
				printf("%d %d %d\n",dia, mes, ano); 
			}
			
		}
		
	}	
	
}

main(){
	int dia,mes,ano,dia1,mes1,ano1;
	scanf("%d %d %d %d %d %d",&dia,&mes,&ano,&dia1,&mes1,&ano1);
	data(dia,mes,ano,dia1,mes1,ano1);
	
	return(0); 
	
}
