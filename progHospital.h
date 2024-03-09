/* PROGRAMA DE ATENDIMENTO HOSPITALAR*/
/*AUTORES:
Elter Rodrigues -  , 
Isadora Resende - 22300382, 
Vinicius César -  ,
Gabriel Duarte - 22303292 */

#include <stdio.h>

int estadoNum;
	if(strcmp(estado, "péssimo") == 0) {
		estadoNum = 1;
	} else if strcmp(pacientes[i].estado, "pessimo") == 0) {
		estadoNum = 1;
	} else if strcmp(pacientes[i].estado, "Péssimo") == 0) {
		estadoNum = 1;
	} else if strcmp(pacientes[i].estado, "Pessimo") == 0) {
		estadoNum = 1;
	} else if strcmp(pacientes[i].estado, "ruim") == 0) {
		estadoNum = 2;
	} else if strcmp(pacientes[i].estado, "Ruim") == 0) {
		estadoNum = 2;
	} else if strcmp(pacientes[i].estado, "regular") == 0) {
		estadoNum = 3;
	} else if strcmp(pacientes[i].estado, "Regular") == 0) {
		estadoNum = 3;
	} else {
		printf("Estado inválido, digite novamente \n")
		return 0;
	}
