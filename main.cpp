#include "Torre.hpp"
#include "Cohete.hpp"
#include "Director.hpp"
#include <stdio.h>
#include <Windows.h>

void main(){
	IniciaCohete();
	iniciaTorre();
	IniciaDirector();
	while(EstaDepositoLlenoCohete(2)!=1){
		Sleep(8);
   	    system("cls");
		SimulaSecuencia();
		printf("----------------------\n");
		informaTorre();
		informaCohete();
		informaDirector();
	}
}