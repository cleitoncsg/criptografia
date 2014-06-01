#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

void cabecalho(){     // procedimeto para a criação do cabeçalho
     printf("\n\n\n\n\n\n\n\n\n         \t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
     printf("         \t+                                                  +\n");
     printf("         \t+          Universidade de Bras%clia - FGA          +\n", 161);
     printf("         \t+       Estruturas Matem%cticas para Computa%c%co     +\n",160,135,198);
     printf("         \t+              Trabalho - Cifra de Vigenere        +\n");
     printf("         \t+            Aluno: %clex Silva Mesquita            +\n", 181);
     printf("         \t+              Matr%ccula: 11/0106474               +\n", 161);
     printf("         \t+                                                  +\n");
     printf("         \t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t   %s\n",__DATE__);
     printf("Pressione qualquer tecla para ir ao Menu");
     getch();       // função para esperar uma tecla a ser digitada
     system("cls");     // comando para limpar a tela de saída

}

void menu(){
    printf("1- Codificar.\n");
    printf("2- Decodificar.\n");
    printf("3- Sair do programa.\n");
}

void menuCodificar(){
    printf("1- Abrir a mensagem.\n");
    printf("2- Visualizar a mensagem.\n");
    printf("3- Codificar a mensagem.\n");
    printf("4- Visualizar a mensagem codificada.\n");
    printf("5- Voltar ao menu.\n");


}

void menuDecodificar(){
    printf("1- Abrir a mensagem codificada.\n");
    printf("2- Visualizar a mensagem codificada.\n");
    printf("3- Decodificar a mensagem.\n");
    printf("4- Visualizar a mensagem decodificada.\n");
    printf("5- voltar ao menu.\n");
}

void codificar(){
    int opcao,i=0,j=0,k=0,n=0,l=0,c=0;
    char  leitor;
    bool mensagemAberta=false, continuar=true,validarletra=false, entrou=false, codificou=false,chaveInvalida=false;
    char mensagem[2000], mensagemCodificada[2000];
    char chave[2000];
    FILE *FMensagem,*FChave, *FCodificado;

    while(continuar==true){
        menuCodificar();
        scanf("%d", &opcao);
        system("cls");
        if(opcao==1){
            FMensagem=fopen("mensagem.txt","r");
            FChave=fopen("chave.txt","r");

            if(!FMensagem){
                printf("Erro ao abrir a mensagem!\7");
                getch();
                system("cls");
            }
            else{
                printf("Mensagem aberta com sucesso!");
                getch();
                mensagemAberta=true;
                system("cls");

            }
        }
        /*colocar o rewind*/
        else if(opcao==2){
            if (mensagemAberta==true){
                while((leitor=fgetc(FMensagem))!=EOF){
                        putchar(leitor);
                }
                rewind(FMensagem);
                fflush(stdin);
                getch();
                system("cls");

            }
            else{
                printf("A mensagem nao foi aberta!\7");
                getch();
                system("cls");
            }

        }
        else if(opcao==3){
            if (mensagemAberta==true){
                while((leitor=fgetc(FMensagem))!=EOF){

                        mensagem[i]=leitor;
                        i++;
                }
                mensagem[i]='\0';
                rewind(FMensagem);
                while((leitor=fgetc(FChave))!=EOF){
                    chave[l]=leitor;
                    l++;
                }
                chave[l]='\0';
                rewind(FChave);
                strupr(mensagem);
                strupr(chave);
                for(c=0;c<strlen(chave);c++){
                    if(chave[c]>90||chave[c]<65)
                        chaveInvalida=true;
                }
                if((strlen(mensagem)>strlen(chave)) && chaveInvalida==false){
                    while(mensagem[j]!='\0'){
                        if(mensagem[j]<65 || mensagem[j]>90){
                            mensagemCodificada[j]=mensagem[j];
                        }
                        else{
                            if((chave[n]!='\0')&&entrou==false){

                                if((mensagem[j]+chave[n]-65)>90)
                                    mensagemCodificada[j]=mensagem[j]+chave[n]-65-26;
                                else
                                    mensagemCodificada[j]=mensagem[j]+chave[n]-65;

                            }
                            else{
                                entrou=true;
                                do{
                                    if(mensagem[k]>=65 && mensagem[k]<=90){
                                        validarletra=true;
                                    }
                                    else{
                                        k++;
                                        validarletra=false;
                                    }
                                }
                                while(validarletra==false);

                                if((mensagem[j]+mensagem[k]-65)>90)
                                    mensagemCodificada[j]=mensagem[j]+mensagem[k]-65-26;
                                else
                                    mensagemCodificada[j]=mensagem[j]+mensagem[k]-65;
                                k++;
                            }
                            n++;
                        }
                        j++;
                        }

                        FCodificado=fopen("codificado.txt","w");
                        fputs(mensagemCodificada,FCodificado);
                        fclose(FCodificado);
                        codificou=true;
                        printf("Mensagem codificada com Sucesso!");
                        getch();
                        system("cls");
                    }
                    else{
                    printf("O tamanho da chave e invalido ou a chave possui caracteres especiais!\7");
                    getch();
                    system("cls");
                }
            }
            else{
                printf("A mensagem nao foi aberta!\7");
                getch();
                system("cls");
            }
        }
        else if(opcao==4){
            if(codificou==true){
                printf("%s\n", mensagemCodificada);
                getch();
                system("cls");
            }
            else{
                printf("A mensagem ainda nao foi codificada!\7");
                getch();
                system("cls");
            }
        }
        else if(opcao==5){
            continuar=false;
        }
        else{
            printf("Opcao invalida!\7");
            getch();
            fflush(stdin);
            system("cls");
        }
    }
}

void decodificar(){
    int opcao,i=0,j=0,k=0,n=0,l=0, c=0;
    FILE *FChave,*FCodificado,*FMensagem;
    char leitor, chave[2000], codificado[2000], mensagem[2000];
    bool continuar=true,arquivoAberto=false, validarLetra=false,entrou=false, decodificou=false, chaveInvalida=false;


    while(continuar==true){
        menuDecodificar();
        scanf("%d", &opcao);
        system("cls");

        if(opcao==1){
            FCodificado=fopen("codificado.txt","r");
            FChave=fopen("chave.txt","r");

            if(!FCodificado){
                printf("Falanha na abertura do arquivo!\7");
                getch();
                system("cls");
            }
            else{
                arquivoAberto=true;
                printf("O arquivo com o texto codificado foi aberto com sucesso.");
                getch();
                system("cls");
            }
        }
        else if(opcao==2){
                if(arquivoAberto==true){

                    while((leitor=fgetc(FCodificado))!=EOF){

                        putchar(leitor);
                    }
                    rewind(FCodificado);
                    fflush(stdin);
                    getch();
                    system("cls");
                }
                else{
                    printf("O arquivo codificado ainda não foi aberto!\7");
                    getch();
                    system("cls");
                }
        }
        else if(opcao==3){
            if(arquivoAberto==true){
                while((leitor=fgetc(FCodificado))!=EOF){
                    codificado[i]=leitor;
                    i++;
                }
                rewind(FCodificado);
                codificado[i]='\0';
                while((leitor=fgetc(FChave))!=EOF){
                    chave[l]=leitor;
                    l++;
                }
                rewind(FChave);
                chave[l]='\0';
                strlwr(codificado);
                strlwr(chave);
                for(c=0;c<strlen(chave);c++){
                    if(chave[c]>122 || chave[c]<97)
                        chaveInvalida=true;
                }

                if((strlen(codificado)>strlen(chave)) && chaveInvalida==false){

                    while(codificado[j]!='\0'){
                        if(codificado[j]>122||codificado[j]<97){
                            mensagem[j]=codificado[j];
                        }
                        else{
                            if(chave[n]!='\0'&&entrou==false){
                                if((codificado[j]-chave[n]+97)<97)
                                    mensagem[j]=codificado[j]-chave[n]+97+26;
                                else{
                                    mensagem[j]=codificado[j]-chave[n]+97;
                                }
                            }
                            else{
                                entrou=true;
                                do{
                                    if(mensagem[k]>=97 && mensagem[k]<=122){
                                        validarLetra=true;
                                    }
                                    else{
                                        k++;
                                        validarLetra=false;
                                    }
                                }
                                while(validarLetra==false);

                                if((codificado[j]-mensagem[k]+97)<97){
                                    mensagem[j]=codificado[j]-mensagem[k]+97+26;
                                }
                                else{
                                     mensagem[j]=codificado[j]-mensagem[k]+97;
                                }
                                k++;
                            }
                            n++;
                        }
                        j++;
                        if(codificado[j]=='\0'){
                            mensagem[j]='\0';
                            break;
                        }
                    }

                    FMensagem=fopen("mensagem.txt","w");
                    fputs(mensagem,FMensagem);
                    fclose(FMensagem);
                    decodificou=true;
                    printf("Mensagem decodificada com Sucesso!");
                    getch();
                    system("cls");
                }
                else{
                    printf("O tamanho da chave e invalido ou a chave possui caracteres especiais!\7");
                    getch();
                    system("cls");
                }
            }

            else{
                printf("O arquivo codificado ainda nao foi aberto\7");
                getch();
                system("cls");
            }
        }
        else if(opcao==4){
                if(decodificou==true){
                    puts(mensagem);
                    getch();
                    system("cls");
                }
                else{
                    printf("A mensagem ainda nao foi decodificada!\7");
                    getch();
                    system("cls");
                }

        }
        else if(opcao==5){
            continuar=false;

        }
        else{
            printf("Opcao invalida!\7");
            getch();
            fflush(stdin);
            system("cls");
        }
    }
}


int main()
{

    int opcaoCodificar;
    char sair_programa='n';
    char continuar='v';
    FILE *fmensagem, *fchave;

    cabecalho();

    while(continuar=='v' && (sair_programa!='s'||sair_programa!='S')){
        menu();
        scanf("%d", &opcaoCodificar);
        system("cls");

        /*codificar*/
        if(opcaoCodificar==1){
            system("cls");
            codificar();

        }
        /*decodificar*/
        else if (opcaoCodificar==2){
            system("cls");
            decodificar();

        }
        /*sair do programa*/
        else if(opcaoCodificar==3){
            continuar='f';

        }
        /*opção inválida*/
        else{
            system("cls");
            printf("Opcao invalida! Pressione qualquer tecla para voltar ao menu principal\7");
            getch();
            fflush(stdin);
            system("cls");
        }
    }
    return 0;
}
