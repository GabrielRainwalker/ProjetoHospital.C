/* PROGRAMA DE ATENDIMENTO HOSPITALAR*/
/*AUTORES:
Elter Rodrigues -  , 
Isadora Resende - 22300382 , 
Vinicius César -  ,
Gabriel Duarte - 22303292 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
	char nome[50];
	char estado[30];
	int idade;
	int estadoNum;
}paciente;

/* FUNÇÃO QUE TRANSFORMA A ENTRADA STRING EM NUMERO PRA FACILITAR A ORENAÇÃO*/
void estadonumerico(paciente *pacientes, int i) {
	int estadoNum;
	if (strcasecmp(pacientes[i].estado, "péssimo") == 0) {
		estadoNum = 1;
	} else if (strcasecmp(pacientes[i].estado, "pessimo") == 0) {
		estadoNum = 1;
	} else if (strcasecmp(pacientes[i].estado, "Péssimo") == 0) {
		estadoNum = 1;
	} else if (strcasecmp(pacientes[i].estado, "Pessimo") == 0) {
		estadoNum = 1;
	} else if (strcasecmp(pacientes[i].estado, "ruim") == 0) {
		estadoNum = 2;
	} else if (strcasecmp(pacientes[i].estado, "Ruim") == 0) {
		estadoNum = 2;
	} else if (strcasecmp(pacientes[i].estado, "regular") == 0) {
		estadoNum = 3;
	} else if (strcasecmp(pacientes[i].estado, "Regular") == 0) {
		estadoNum = 3;
	} else {
		printf("Estado inválido, digite novamente \n");
		return;
	}
	pacientes[i].estadoNum = estadoNum;
}

 /* FUNÇÃO DE ORDENAÇÃO BUBBLE */
void bubble_sort (paciente *Pacientes, int n) {
    int k, j;
    paciente aux;

    for (k = 0; k < n - 1; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - k - 1; j++) {
            printf("%d, ", j);

            if (Pacientes[j].estadoNum > Pacientes[j + 1].estadoNum) {
                aux              = Pacientes[j];
                Pacientes[j]     = Pacientes[j + 1];
                Pacientes[j + 1] = aux;
            } else if (Pacientes[j].estadoNum == Pacientes[j + 1].estadoNum && Pacientes [j].idade > Pacientes[j + 1].idade) {
            	aux              = Pacientes[j];
                Pacientes[j]     = Pacientes[j + 1];
                Pacientes[j + 1] = aux;
			}
        }
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd;
	printf("Quantos Pacientes deseja inserir? ");
	scanf("%d",&qtd);
	
	paciente *Pacientes= (paciente *) malloc(qtd * sizeof(paciente));
	if (Pacientes == NULL) {
		printf("Erro de memória\n");
		return 1;
	}
	int i = 0;
	while (i < qtd) {	
	printf("\nQuantidade de pacientes cadastradas %d: \n", i+1);
	
	printf("Digite o nome do paciente: ");
	scanf(" %[^\n]s", Pacientes[i].nome);
	
	printf("Digite a idade do paciente: ");
	scanf("%d", &Pacientes[i].idade);
	
	printf("Digite o Estado do paciente: ");
	scanf("%s", Pacientes[i].estado);
	
	estadonumerico(Pacientes, i);
	
		i++;
	
	}
	bubble_sort(Pacientes, qtd);
	printf("\nPacientes Ordenados: \n");
	for(i = 0; i < qtd; i++) {
		printf("Nome: %s, Estado: %s, Idade: %d\n", Pacientes[i].nome, Pacientes[i].estado, Pacientes[i].idade);
	}
	
	free(Pacientes);
	return 0;
	
}
