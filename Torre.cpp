#include "Cohete.hpp"
#include "Director.hpp"
#include "Torre.hpp"
#include <stdio.h>

int tubosConectados;

void iniciaTorre(){
	tubosConectados=0;
}

void ConectaTubosTorre(){
	if(tubosConectados==0){
		tubosConectados=1;
	}
	else{
		printf("Tubos ya conectados\n");
	}
}

void TransfiereCombustible(int e, float c){
	if(tubosConectados==0){
		RecibeCombustibleCohete(e,c);
	}
}

void DesconectaTubosTorre(){
	tubosConectados=0;
}

void informaTorre(){
	if(tubosConectados==1){
		printf("Tubos conectados\n");
	}
	else{
		printf("Tubos desconectados\n");
	}
}