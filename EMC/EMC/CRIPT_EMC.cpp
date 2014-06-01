
//Bibliotecas gerais
#import <stdio.h>
#import <stdlib.h>
#import <conio.h>
#import <string.h>
# define TAMANHO 100000

//Variáveis globais
//Essas variáveis serão incrementadas na função principal e utilizadas nas funções secundárias
int j = 0,inicio = 0,parada = 1; int i;

//Procedimento que faz a criptografia 01
void CRIPT_01(char frase[]){
	
	//Laço para percotrrer os 20 primeiros caracteres
	 for(  i = inicio; i <= parada ; i++)
	 {
		 
		//Condições para gerar criptografias
		if(frase[i] == 'a' || frase[i] == 'A')
			frase[i] = '%';

		if(frase[i] == 'e' || frase[i] == 'E')
			frase[i] = '$';

		if(frase[i] == 'i' || frase[i] == 'I')
			frase[i] = '@';

		if(frase[i] == 'o' || frase[i] == '0')
			frase[i] = '4';

		if(frase[i] == 'u' || frase[i] == 'U')
			frase[i] = '0';
			
		if(frase[i] == 'b' || frase[i] == 'B')
			frase[i] = '´';
			
		if(frase[i] == 'C' || frase[i] == 'c')
			frase[i] = 'd';
			
		if(frase[i] == 'd' || frase[i] == 'D')
			frase[i] = 'E';
			
		if(frase[i] == 'F' || frase[i] == 'f')
			frase[i] = 'G';
			
		if(frase[i] == 'G' || frase[i] == 'G')
			frase[i] = 'h';
		
		if(frase[i] == 'h' || frase[i] == 'H')
			frase[i] = 'i';
			
		if(frase[i] == 'J' || frase[i] == 'j')
			frase[i] = 'm';
		
		if(frase[i] == 'l' || frase[i] == 'l')
			frase[i] = 'j';
			
		if(frase[i] == 'm' )
			frase[i] = 'x';
			
		if(frase[i] == 'M')
			frase[i] = 'P';
			
		if(frase[i] == 'n' || frase[i] == 'N')
			frase[i] = 'B';
			
		if(frase[i] == 'O' || frase[i] == 'o')
			frase[i] = 'r';
			
		if(frase[i] == 'P' || frase[i] == 'p')
			frase[i] = '*';
			
		if(frase[i] == 'q' || frase[i] == 'Q')
			frase[i] = '1';
			
		if(frase[i] == 'r' || frase[i] == 'R')
			frase[i] = '3';
			
		if(frase[i] == 's' || frase[i] == 'S')
			frase[i] = '5';
			
		if(frase[i] == 't' || frase[i] == 'T')
			frase[i] = '2';
			
		if(frase[i] == 'V' || frase[i] == 'v')
			frase[i] = '9';
			
		if(frase[i] == 'x' || frase[i] == 'X')
			frase[i] = '3';
			
		if(frase[i] == 'y' || frase[i] == 'y')
			frase[i] = '7';
			
		if(frase[i] == 'w' || frase[i] == 'W')
			frase[i] = '8';
		
		if(frase[i] == 'z' || frase[i] == 'Z')
			frase[i] = '6';
				
		if(frase[i] == '+')
			frase[i] = '=';
			
		if(frase[i] == '=')
			frase[i] = '+';
			
		if(frase[i] == '-')
			frase[i] = '_';
			
		if(frase[i] == '_')
			frase[i] = '-';
			
		if(frase[i] == 'ç' || frase[i] == 'Ç')
			frase[i] = 'é';

		if(frase[i] == 'é' || frase[i] == 'É')
			frase[i] = 'ç';

		if(frase[i] == 'á' || frase[i] == 'Á')
			frase[i] = '~';

		if(frase[i] == 'ã' || frase[i] == 'Ã')
			frase[i] = ',';

		if(frase[i] == 'í' || frase[i] == 'Í')
			frase[i] = ';';
			
		if(frase[i] == '/')
			frase[i] = ')';
	
		if(frase[i] == '(')
			frase[i] = '*';
			
		if(frase[i] == '*')
			frase[i] = '(';
			
		if(frase[i] == '&')
			frase[i] = '¨';
			
		if(frase[i] == '%')
			frase[i] = '¢';

		if(frase[i] == '¢')
			frase[i] = '%';

		if(frase[i] == '¬')
			frase[i] = '£';
			
		if(frase[i] == '#')
			frase[i] = '@';

		if(frase[i] == '@')
			frase[i] = '#';

		if(frase[i] == '!')
			frase[i] = '"';
			
		if(frase[i] == '"')
			frase[i] = '!';

		if(frase[i] == 'º')
			frase[i] = ':';

		if(frase[i] == ':')
			frase[i] = 'ª';
			
		if(frase[i] == '^')
			frase[i] = '´';

		if(frase[i] == '´')
			frase[i] = '^';

		if(frase[i] == '[')
			frase[i] = ']';
			
		if(frase[i] == ']')
			frase[i] = '[';

		if(frase[i] == '>')
			frase[i] = '<';

		if(frase[i] == '<')
			frase[i] = '>';
			
		if(frase[i] == ';')
			frase[i] = '{';

		if(frase[i] == '{')
			frase[i] = ';';

		if(frase[i] == '|')
			frase[i] = '³';

		if(frase[i] == '³')
			frase[i] = '|';

		if(frase[i] == '1')
			frase[i] = '2';
			
		if(frase[i] == '2')
			frase[i] = '3';

		if(frase[i] == '3')
			frase[i] = '4';
		
		if(frase[i] == '4')
			frase[i] = '5';

		if(frase[i] == '5')
			frase[i] = '6';
			
		
		if(frase[i] == '6')
			frase[i] = '7';

		if(frase[i] == '7')
			frase[i] = '8';
		
		
		if(frase[i] == '8')
			frase[i] = '9';
			
		if(frase[i] == '9')
			frase[i] = '0';
			
		if(frase[i] == '.')
			frase[i] = '§';
			
		if(frase[i] == '#' )
			frase[i] = '!';
			

		//Impressão das letras criptogradas no primeiro laço
		printf("%c",frase[i]);
		 
		//Incremendo de j
		j++;
			
		//Condição para quebrar o laço e imprimir o resultado
		if( parada == j){
			//Incremento dessas variáveis para que seja possivel haver um novo loop
			//nesse ou em outro procedimento
			inicio += 1;
			parada += 1;
			break;
		}

	}
}

//Procedimento que faz a criptografia 02
void CRIPT_02(char frase[]){

	//Laço para percotrrer os 20 primeiros caracteres
	 for(  i = inicio; i < parada ; i++)
	 {
		//Condições para trocar as vogais pelos números
		if(frase[i] == 'a' || frase[i] == 'A')
			frase[i] = '&';

		if(frase[i] == 'e' || frase[i] == 'E')
			frase[i] = '+';

		if(frase[i] == 'i' || frase[i] == 'I')
			frase[i] = '%';

		if(frase[i] == 'o' || frase[i] == '0')
			frase[i] = '#';

		if(frase[i] == 'u' || frase[i] == 'U')
			frase[i] = '!';

		if(frase[i] == 'b' || frase[i] == 'B')
			frase[i] = '¨';

		if(frase[i] == 'C' || frase[i] == 'c')
			frase[i] = '0';

		if(frase[i] == 'd' || frase[i] == 'D')
			frase[i] = 'c';

		if(frase[i] == 'F' || frase[i] == 'f')
			frase[i] = 'c';

		if(frase[i] == 'G' || frase[i] == 'G')
			frase[i] = '=';

		if(frase[i] == 'h' || frase[i] == 'H')
			frase[i] = '|';

		if(frase[i] == 'J' || frase[i] == 'j')
			frase[i] = '.';

		if(frase[i] == 'l' || frase[i] == 'l')
			frase[i] = 'ç';

		if(frase[i] == 'm' )
			frase[i] = 'Ç';

		if(frase[i] == 'M')
			frase[i] = ',';

		if(frase[i] == 'n' || frase[i] == 'N')
			frase[i] = '_';

		if(frase[i] == 'O' || frase[i] == 'o')
			frase[i] = '-';

		if(frase[i] == 'P' || frase[i] == 'p')
			frase[i] = '$';

		if(frase[i] == 'q' || frase[i] == 'Q')
			frase[i] = '@';

		if(frase[i] == 'r' || frase[i] == 'R')
			frase[i] = '3';

		if(frase[i] == 's' || frase[i] == 'S')
			frase[i] = '"';

		if(frase[i] == 't' || frase[i] == 'T')
			frase[i] = '7';

		if(frase[i] == 'V' || frase[i] == 'v')
			frase[i] = '6';

		if(frase[i] == 'x' || frase[i] == 'X')
			frase[i] = '7';

		if(frase[i] == 'y' || frase[i] == 'y')
			frase[i] = '3';

		if(frase[i] == 'w' || frase[i] == 'W')
			frase[i] = '6';

		if(frase[i] == 'z' || frase[i] == 'Z'){
			frase[i] = '8'; }
			
		if(frase[i] == '+')
			frase[i] = '=';

		if(frase[i] == '=')
			frase[i] = '+';

		if(frase[i] == '-')
			frase[i] = '_';

		if(frase[i] == '_')
			frase[i] = '-';

		if(frase[i] == '/')
			frase[i] = ')';

		if(frase[i] == '(')
			frase[i] = '*';

		if(frase[i] == '*')
			frase[i] = '(';

		if(frase[i] == '&')
			frase[i] = '¨';

		if(frase[i] == '%')
			frase[i] = '¢';

		if(frase[i] == '¢')
			frase[i] = '%';

		if(frase[i] == '¬')
			frase[i] = '£';

		if(frase[i] == '#')
			frase[i] = '@';

		if(frase[i] == '@')
			frase[i] = '#';

		if(frase[i] == '!')
			frase[i] = '"';

		if(frase[i] == '"')
			frase[i] = '!';

		if(frase[i] == 'º')
			frase[i] = ':';

		if(frase[i] == ':')
			frase[i] = 'ª';

		if(frase[i] == '^')
			frase[i] = '´';

		if(frase[i] == '´')
			frase[i] = '^';

		if(frase[i] == '[')
			frase[i] = ']';

		if(frase[i] == ']')
			frase[i] = '[';

		if(frase[i] == '>')
			frase[i] = '<';

		if(frase[i] == '<')
			frase[i] = '>';

		if(frase[i] == ';')
			frase[i] = '{';

		if(frase[i] == '{')
			frase[i] = ';';

		if(frase[i] == '|')
			frase[i] = '³';

		if(frase[i] == '³')
			frase[i] = '|';

		if(frase[i] == '1')
			frase[i] = '3';

		if(frase[i] == '2')
			frase[i] = '4';

		if(frase[i] == '3')
			frase[i] = '5';

		if(frase[i] == '4')
			frase[i] = '6';

		if(frase[i] == '5')
			frase[i] = '7';


		if(frase[i] == '6')
			frase[i] = '8';

		if(frase[i] == '7')
			frase[i] = '9';


		if(frase[i] == '8')
			frase[i] = '0';

		if(frase[i] == '9')
			frase[i] = '1';

		if(frase[i] == '.')
			frase[i] = ';';
		
		if(frase[i] == 'ç' || frase[i] == 'Ç')
			frase[i] = 'é';

		if(frase[i] == 'é' || frase[i] == 'É')
			frase[i] = 'ç';

		if(frase[i] == 'á' || frase[i] == 'Á')
			frase[i] = '~';

		if(frase[i] == 'ã' || frase[i] == 'Ã')
			frase[i] = ',';

		if(frase[i] == 'í' || frase[i] == 'Í')
			frase[i] = ';';
			
		if(frase[i] == '#' )
			frase[i] = '@';

		//Impressão das letras criptogradas no laço
		printf("%c",frase[i]);
		
			
		
		//Incremendo de j
		j++;

		//Condição para quebrar o laço e imprimir o resultado
		if( parada == j){
			//Incremento dessas variáveis para que seja possivel haver um novo loop
			//nesse ou em outro procedimento
			inicio += 1;
			parada += 1;
			break;
		}
	}
}

//Procedimento que faz a criptografia 03
void CRIPT_03(char frase[]){

	//Laço para percotrrer os 20 primeiros caracteres
	 for(  i = inicio; i <= parada ; i++)
	 {

		//Condições para trocar as vogais pelos números
		if(frase[i] == 'a' || frase[i] == 'A')
			frase[i] = '-';

		if(frase[i] == 'e' || frase[i] == 'E')
			frase[i] = 'L';

		if(frase[i] == 'i' || frase[i] == 'I')
			frase[i] = '=';

		if(frase[i] == 'o' || frase[i] == '0')
			frase[i] = '+';

		if(frase[i] == 'u' || frase[i] == 'U')
			frase[i] = ')';

		if(frase[i] == 'b' || frase[i] == 'B')
			frase[i] = '(';

		if(frase[i] == 'C' || frase[i] == 'c')
			frase[i] = '3';

		if(frase[i] == 'd' || frase[i] == 'D')
			frase[i] = '4';

		if(frase[i] == 'F' || frase[i] == 'f')
			frase[i] = '7';

		if(frase[i] == 'G' || frase[i] == 'G')
			frase[i] = '3';

		if(frase[i] == 'h' || frase[i] == 'H')
			frase[i] = '$';

		if(frase[i] == 'J' || frase[i] == 'j')
			frase[i] = '1';

		if(frase[i] == 'l' || frase[i] == 'l')
			frase[i] = 'v';

		if(frase[i] == 'm' )
			frase[i] = 'Z';

		if(frase[i] == 'M')
			frase[i] = 'z';

		if(frase[i] == 'n' || frase[i] == 'N')
			frase[i] = 'P';

		if(frase[i] == 'O' || frase[i] == 'o')
			frase[i] = '_';

		if(frase[i] == 'P' || frase[i] == 'p')
			frase[i] = '!';

		if(frase[i] == 'q' || frase[i] == 'Q')
			frase[i] = '*';

		if(frase[i] == 'r' || frase[i] == 'R')
			frase[i] = '3';

		if(frase[i] == 's' || frase[i] == 'S')
			frase[i] = '8';

		if(frase[i] == 't' || frase[i] == 'T')
			frase[i] = '2';

		if(frase[i] == 'V' || frase[i] == 'v')
			frase[i] = '9';

		if(frase[i] == 'x' || frase[i] == 'X')
			frase[i] = '3';

		if(frase[i] == 'y' || frase[i] == 'y')
			frase[i] = '6';

		if(frase[i] == 'w' || frase[i] == 'W')
			frase[i] = 'y';

		if(frase[i] == 'z' || frase[i] == 'Z')
			frase[i] = '#';
		
		if(frase[i] == '+')
			frase[i] = '=';

		if(frase[i] == '=')
			frase[i] = '+';

		if(frase[i] == '-')
			frase[i] = '_';

		if(frase[i] == '_')
			frase[i] = '-';

		if(frase[i] == '/')
			frase[i] = ')';

		if(frase[i] == '(')
			frase[i] = '*';

		if(frase[i] == '*')
			frase[i] = '(';

		if(frase[i] == '&')
			frase[i] = '¨';

		if(frase[i] == '%')
			frase[i] = '¢';

		if(frase[i] == '¢')
			frase[i] = '%';

		if(frase[i] == '¬')
			frase[i] = '£';

		if(frase[i] == '#')
			frase[i] = '@';

		if(frase[i] == '@')
			frase[i] = '#';

		if(frase[i] == '!')
			frase[i] = '"';

		if(frase[i] == '"')
			frase[i] = '!';

		if(frase[i] == 'º')
			frase[i] = ':';

		if(frase[i] == ':')
			frase[i] = 'ª';

		if(frase[i] == '^')
			frase[i] = '´';

		if(frase[i] == '´')
			frase[i] = '^';

		if(frase[i] == '[')
			frase[i] = ']';

		if(frase[i] == ']')
			frase[i] = '[';

		if(frase[i] == '>')
			frase[i] = '<';

		if(frase[i] == '<')
			frase[i] = '>';

		if(frase[i] == ';')
			frase[i] = '{';

		if(frase[i] == '{')
			frase[i] = ';';

		if(frase[i] == '|')
			frase[i] = '³';

		if(frase[i] == '³')
			frase[i] = '|';

		if(frase[i] == '1')
			frase[i] = '3';

		if(frase[i] == '2')
			frase[i] = '4';

		if(frase[i] == '3')
			frase[i] = '5';

		if(frase[i] == '4')
			frase[i] = '6';

		if(frase[i] == '5')
			frase[i] = '7';


		if(frase[i] == '6')
			frase[i] = '8';

		if(frase[i] == '7')
			frase[i] = '9';


		if(frase[i] == '8')
			frase[i] = '0';

		if(frase[i] == '9')
			frase[i] = '1';

		if(frase[i] == '.')
			frase[i] = 'ç';
			
		if(frase[i] == 'ç' || frase[i] == 'Ç')
			frase[i] = 'é';
			
		if(frase[i] == 'é' || frase[i] == 'É')
			frase[i] = 'ç';
			
		if(frase[i] == 'Á' || frase[i] == 'á')
			frase[i] = '~';
			
		if(frase[i] == '~' || frase[i] == '~')
			frase[i] = '+';
			
		if(frase[i] == 'í' || frase[i] == 'Í')
			frase[i] = ';';
			
		if(frase[i] == '#' )
			frase[i] = '@';

		//Impressão das letras criptogradas no primeiro laço
		printf("%c",frase[i]);

		//Incremendo de j
		j++;

		//Condição para quebrar o laço e imprimir o resultado
		if( parada == j){
			//Incremento dessas variáveis para que seja possivel haver um novo loop
			//nesse ou em outro procedimento
			inicio += 1;
			parada += 1;
			break;
		}

	}
}

//Função principal
int main()
{
	system("color F1");
	//Variável
	char frase[TAMANHO];

	//Solicitando a frase para o usuário
	 printf("\n Digite uma frase,por favor:  \n");
	 fflush(stdin);
	 gets(frase);

	 //Contando o tamanho da frase que o usuário digitou
	 int TAMANHO_FRASE = strlen(frase);
	 //Condição para o usuário digitar no máximo 300 caracteres
	while(TAMANHO_FRASE > 300){
			printf("\nVoce ultrapassou o numero de caracteres\n");
			printf("\nDigite novamente\n");
			fflush(stdin);
	 		gets(frase);
	}
			
	  printf("\n_________________________________________________________________________________________\n");
	  printf("\t\tFRASE CRIPTOGRAFADA:\n");
		//Chamada do procedimentos para criptografar a frase
		//Observe que os procedimentos estão todos misturados para lascar todo mundo. XD
		//A chamada dos procedimentos está divivida em 12 blocos com 25 procedimentos. 12 X 25 = 300 caracteres
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		//--------------------------------------------------------------------------------------------//
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);

		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_01(frase);
		CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_03(frase);	CRIPT_01(frase);	CRIPT_02(frase);
		CRIPT_01(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		CRIPT_02(frase);	CRIPT_01(frase);	CRIPT_03(frase);	CRIPT_02(frase);	CRIPT_01(frase);
		//--------------------------------------------------------------------------------------------//
		
			
	 printf("\n_____________________________________________________________________________\n");

  getch();
  return 0;
}


