#include "Director.hpp"
#include "Cohete.hpp"
#include "Torre.hpp"
#include <stdio.h>

int paso=0;

void IniciaDirector(){
	paso=1;
	ConectaTubosTorre();
}

void SimulaSecuencia(){
	printf("Paso: %d\n",paso);
	if(paso==1){
		paso+=1;
	}
	else if(paso==2){
		RecibeCombustibleCohete(0,200);
		if(EstaDepositoLlenoCohete(0)==1){
			paso+=1;
		}
	}
	else if(paso==3){
		RecibeCombustibleCohete(1,100);
		if(EstaDepositoLlenoCohete(1)==1){
			paso+=1;
		}
	}
	else if(paso==4){
		RecibeCombustibleCohete(2,50);
		if(EstaDepositoLlenoCohete(2)==1){
			paso+=1;
		}
	}
	else if(paso==5){
		ConsumeCombustibleCohete(0,500);
		if(EstaDepositoVacioCohete(0)==1){
			SeparaEtapaCohete(0);
			paso+=1;
		}
	}
	else if(paso==6){
		ConsumeCombustibleCohete(1,300);
		if(EstaDepositoVacioCohete(1)==1){
			SeparaEtapaCohete(1);
			paso+=1;
		}
	}
	else if(paso==7){
		ConsumeCombustibleCohete(2,100);
		if(EstaDepositoVacioCohete(2)==1){
			SeparaEtapaCohete(2);
			paso+=1;
		}
	}
}

int EstaSecuenciaCompletada(){
	if(paso>=8){
		return 1;
	}
	else{
		return 0;
	}
}

void informaDirector(){
	if(EstaSecuenciaCompletada()==1){
		printf("Secuencia completada!\n");
	}
	else{
		printf("Completando secuencia\n");
	}
}