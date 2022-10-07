#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define MAX 200

typedef struct projeto{
	int codigo;
	int status;
	char titulo[30];
	char desc[50];
	int ano;
	char gerente[30];
	char tipo[20];
	char objt[40];
	char cliente[30];
}projeto;

projeto campo[MAX];
int i=0;

void cadastrar(projeto campo[MAX]){
	int cad;
	do{
		if(i==MAX){	
			system("cls");
			printf("\n_______________________________________________________________________\n");
			printf("\n\n>>>>>> BASE DE DADOS CHEIA: não há espaço para inserir novos projetos.\n");
			printf("\n_______________________________________________________________________\n\n");
			system("pause");
			return;
		}
		else{
			system("cls");
			printf("\n\n______________________CADASTRO DE PROJETOS_______________________\n\n");
			campo[i].codigo=i+1;
			printf("\n PROJETO Nº: %d\n\n", campo[i].codigo);
			printf(" Qual o status do projeto? (1)A fazer (2)Fazendo (3)Concluído: ");
			scanf("%d", &campo[i].status);
			printf("\n Digite o título do projeto: ");
			fflush(stdin);
			gets(campo[i].titulo);
			printf(" Insira a descrição do projeto: ");
			fflush(stdin);
			gets(campo[i].desc);
			printf(" Defina o Ano do projeto: ");
			scanf("%d", &campo[i].ano);
			fflush(stdin);
			printf(" Defina o gerente resposável: ");
			fflush(stdin);
			gets(campo[i].gerente);
			printf(" Defina o tipo de projeto: ");
			fflush(stdin);
			gets(campo[i].tipo);
			printf(" Insira o objetivo primário/principal: ");
			fflush(stdin);
			gets(campo[i].objt);
			printf(" Insira o nome do cliente: ");
			fflush(stdin);
			gets(campo[i].cliente);
			i++;
		}
		printf("\n Inserir OUTRO projeto? (1)Sim (2)Não: ");
		scanf(" %d", &cad);
		system("pause");	
	}
	while(cad==1);
return;	
}

void imprimir(projeto campo[MAX]){
	int i;
	system("cls");
	printf("\n\n_________________________________________\n");
	printf("\n\t\t PROJETOS\n");
	printf("_________________________________________\n");
	for (i=0; i<MAX; i++){	
		printf("\n Projeto Nº %d \n\n", campo[i].codigo);
		printf(" Título: %s\n", campo[i].titulo);
		printf(" Descrição: %s\n", campo[i].desc);
		printf(" Ano: %d\n", campo[i].ano);
		printf(" Gerente responsável: %s\n", campo[i].gerente);
		printf(" Tipo de projeto: %s\n", campo[i].tipo);
		printf(" Objetivo primário/principal: %s\n", campo[i].objt);
		printf(" Cliente: %s\n", campo[i].cliente);
		switch(campo[i].status){
			case 1:
				printf(" Status: A fazer \n\n");
			break;
			case 2:
				printf(" Status: Fazendo \n\n");
			break;
			case 3:
				printf(" Status: Concluído \n\n");
			break;
			default:
				printf("\t>>>>>>>>  Opção inválida  <<<<<<<<<\n\n");
			break;	
		}		
	}
	system("pause");
	return;
}

void busca3(projeto campo[MAX]){
	int status,j;
	printf("\n_______________________________________________________\n\n");
	printf("\t   PROJETOS COM STATUS: A fazer\n");
	printf("_______________________________________________________\n");
	status=1;
	j=0;
	while(j<=i){
		if(status==campo[j].status){
			printf("\n Projeto Nº: %d\n\n", campo[j].codigo);
			printf(" Título: %s\n", campo[j].titulo);
			printf(" Descrição: %s\n", campo[j].desc);
			printf(" Ano: %d\n", campo[j].ano);
			printf(" Gerente: %s\n", campo[j].gerente);
			printf(" Tipo: %s\n", campo[j].tipo);
			printf(" Objetivo primário/principal: %s\n", campo[j].objt);
			printf(" Cliente: %s\n\n", campo[j].cliente);
		}
		j++;	
	}		
	system("pause");	
}

void busca4(projeto campo[MAX]){
	int status,j;
	printf("\n_______________________________________________________\n\n");
	printf("\t   PROJETOS COM STATUS: Fazendo\n");
	printf("_______________________________________________________\n");
	status=2;
	j=0;
	while(j<=i){
		if(status==campo[j].status){
			printf("\n Projeto Nº: %d\n", campo[j].codigo);
			printf(" Título: %s\n", campo[j].titulo);
			printf(" Descrição: %s\n", campo[j].desc);
			printf(" Ano: %d\n", campo[j].ano);
			printf(" Gerente: %s\n", campo[j].gerente);
			printf(" Tipo: %s\n", campo[j].tipo);
			printf(" Objetivo primário/principal: %s\n", campo[j].objt);
			printf(" Cliente: %s\n\n", campo[j].cliente);
		}
		j++;			
	}
	system("pause");	
}

void busca5(projeto campo[MAX]){
	int status,j;
	printf("\n_______________________________________________________\n\n");
	printf("\t   PROJETOS COM STATUS: Concluído\n");
	printf("_______________________________________________________\n");
	status=3;
	j=0;
	while(j<=i){
		if(status==campo[j].status){
			printf("\n Projeto Nº: %d\n", campo[j].codigo);
			printf(" Título: %s\n", campo[j].titulo);
			printf(" Descrição: %s\n", campo[j].desc);
			printf(" Ano: %d\n", campo[j].ano);
			printf(" Gerente: %s\n", campo[j].gerente);
			printf(" Tipo: %s\n", campo[j].tipo);
			printf(" Objetivo primário/principal: %s\n", campo[j].objt);
			printf(" Cliente: %s\n\n", campo[j].cliente);
		}
		j++;		
	}
	system("pause");	
}

void busca6(projeto campo[MAX]){
	int codigo,j;
	printf("\n__________________________________________\n\n");
	printf(" PROJETO POR: Código\n");
	printf("__________________________________________\n\n");
	printf(" Qual o código do projeto? ");
	scanf("%d", &codigo);
	j=0;
	while(j<=i){
		if(codigo==campo[j].codigo){
			printf("\n Projeto Nº: %d\n", campo[j].codigo);
			printf(" Status: %d\n", campo[j].status);
			printf(" Título: %s\n", campo[j].titulo);
			printf(" Descrição: %s\n", campo[j].desc);
			printf(" Ano: %d\n", campo[j].ano);
			printf(" Gerente: %s\n", campo[j].gerente);
			printf(" Tipo: %s\n", campo[j].tipo);
			printf(" Objetivo primário/principal: %s\n", campo[j].objt);
			printf(" Cliente: %s\n\n", campo[j].cliente);		
		}
		j++;	
	}
	system("pause");	
}

void menu(){
	printf("\n==================== MENU OPÇÕES ======================\n\n");	
	printf("\t1 - Cadastrar novo projeto.\n");
	printf("\t2 - Imprimir todos os projetos.\n");
	printf("\t3 - Imprimir projetos com o Status: A Fazer.\n");
	printf("\t4 - Imprimir projetos com o Status: Fazendo.\n");
	printf("\t5 - Imprimir projetos com o Status: Concluído.\n");
	printf("\t6 - Imprimir projetos por código.\n");
	printf("\t0 - Sair.\n");
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int op;
	do{
		system("cls");
		menu();
		scanf("%d", &op);
		fflush(stdin);
		switch(op){
			case 1:
				cadastrar(campo);
				break;
			case 2:
				imprimir(campo);
				break;
			case 3:
				busca3(campo);
				break;
			case 4:
				busca4(campo);
				break;
			case 5:
				busca5(campo);
				break;
			case 6:
				busca6(campo);
				break;
			case 0:
				break;
			default:
				printf("\t>>>>>>>  Opção inválida  <<<<<<<<<\n\n");
				system("pause");
				break;		
		}
	}
	while(op!=0);
return 0;
}
