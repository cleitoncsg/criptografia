#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_STRING_ARQUIVO 50
#define TAMANHO_CONTEUDO_ARQUIVO 300
int tamanho_conteudo_criptografia;

void realizaCriptografia(int chave);
void cabecalho();
void menuOpcoes();

int main(){
	FILE *arquivo;
	int chave, opcao;
	char nome_arquivo_saida[TAMANHO_STRING_ARQUIVO];
	char conteudo_arquivo[TAMANHO_CONTEUDO_ARQUIVO];
	char lixo_memoria;
	
	system("color F2");
	cabecalho();
	getch();
	system("cls");
	system("color F5");

	while(2){
		menuOpcoes();
		scanf("%d",&opcao);
		
		while(opcao < 0 || opcao > 2){
			printf("Opacao invalida. Digite novamente:");
			scanf("%d",&opcao);
		}
		if(opcao == 2)
			exit(0);
		
		printf("Digite o tipo da chave, por favor: \n");
		scanf("%d",&chave);
	
		realizaCriptografia(chave);
		printf("Arquivo e sua criptografia gravado com sucesso\n");
		getch();
		system("cls");
	}

	fclose(arquivo);

	return 0;
}

void realizaCriptografia(int chave){
	FILE *arquivo_criptografado;
	FILE *arquivo_sem_criptografia;
	char conteudo_sem_criptografia[TAMANHO_CONTEUDO_ARQUIVO];
	int iterator;
	
	arquivo_sem_criptografia = fopen("entrada.txt","rt");
	arquivo_criptografado = fopen("saidaCriptografia.txt","wt");
    fgets(conteudo_sem_criptografia,TAMANHO_CONTEUDO_ARQUIVO, arquivo_sem_criptografia);
    
    printf("Conteudo lido do arquivo:");
    puts(conteudo_sem_criptografia);
	
	tamanho_conteudo_criptografia = strlen(conteudo_sem_criptografia);
	
	for(iterator = 0; iterator < tamanho_conteudo_criptografia; iterator++){
		fprintf(arquivo_criptografado, "%c",conteudo_sem_criptografia[iterator] + chave);
	}
	
	fclose(arquivo_criptografado);
    fclose(arquivo_sem_criptografia);
}


void cabecalho(){
	printf("\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
	printf("\t\t\tUniversidade de Brasilia - FGA\n");
	printf("\t\t\tAluno: xxxxxx\n");
	printf("\t\t\tMatricula:xx/xxxxx \n");
	printf("\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
}

void menuOpcoes(){
	printf("\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
	printf("\t\t\t1) Criptografar mensagem do arquivo entrada.txt\n");
	printf("\t\t\t2) Sair do programa\n");
	printf("\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
}
