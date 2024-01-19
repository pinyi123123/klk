#include "Cohete.hpp"
#include "Director.hpp"
#include "Torre.hpp"
#include <stdio.h>
#include <stdlib.h>

float depositos[3];
const float capacidades[3]={150000.0,50000.0,10000.0};
int separacions[3]={0,0,0};
float velocidad;

void IniciaCohete(){
	depositos[0]=0.0;
	depositos[1]=0.0;
	depositos[2]=0.0;
	separacions[0]=0.0;
	separacions[1]=0.0;
	separacions[2]=0;
	velocidad=0.0;
}

void RecibeCombustibleCohete(int e, float c){
	if(depositos[e]<capacidades[e]){
        depositos[e] += c;
        if(depositos[e]>capacidades[e]){
            depositos[e] = capacidades[e];
        }
    }
	float randomm = ((rand() % 101)/ 100.0);
	if(depositos[e]>0){
		depositos[e]-=c*randomm;
	}
	else{
		depositos[e]=capacidades[e];
	}
}

int EstaDepositoLlenoCohete(int e){
	if(depositos[e]==capacidades[e]){
		return 1;
	}
	else{
		return 0;
	}
}

void ConsumeCombustibleCohete(int e, float c){
	int seg=0,masacohete=210000;
	float rnd=(rand()%11)/100.0;
	depositos[e]-=c;
	velocidad+=(depositos[e]*10)/masacohete;
	if(depositos[e]>0){
		depositos[e]=c*rnd;
	}
	else if(depositos[e]<=0){
		depositos[e]=0;
	}
}

int EstaDepositoVacioCohete(int e){
	if(depositos[e]==0){
		return 1;
	}
	else{
		return 0;
	}
}

void SeparaEtapaCohete(int e){
	if(EstaDepositoVacioCohete(e)==1){
		separacions[e]=1;
	}
}

void informaCohete(){
	printf("Estado depositos:\nDeposito 1: %.2f\nDeposito 2: %.2f\nDeposito 3: %.2f\nVelocidad Cohete: %.2f m/s\n",depositos[0],depositos[1],depositos[2],velocidad);
}
