#include <stdio.h>//fazer uma calculadora, usando fun��es
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//vamos trabalhar com + - / *
#include <locale.h>

void menu();//declaramos elas
void soma();
void subtracao();
void mult();
void divisao();

int main(){
	setlocale(LC_ALL, "portuguese");
	menu();//vamos trabalhar muito dentro da menu
	return 0;
}

	void menu(){
		char nome[50];
		char alt;
		
		printf("Digite o seu nome: ");
		fgets(nome, 50, stdin);//pegamos o nome
		nome[strlen(nome) - 1] = '\0';
		
		system("cls");
		
		printf("Com qual opera��o, voc� quer trabalhar?\n");
		printf("a) Soma\n");
		printf("b) Subtra��o\n");
		printf("c) Multiplica��o\n");
		printf("d) Divis�o\n");
		printf("e) Sair\n");
		scanf("%c", &alt);
		
		alt = tolower(alt);
		system("cls");
		
		switch(alt){//estamos analisando a var alt
			case 'a':
				soma();
				break;
			case 'b':
				subtracao();
				break;
			case 'c':
				mult();
				break;
			case 'd':
				divisao();
				break;
			case 'e':
				exit(0);
				break;
			default:
				printf("Por favor, %s, insira um valor v�lido!!!\n", nome);
				system("pause");
				system("cls");
				menu();
		}
	}
	
		void soma(){
			double num1, num2;
			printf("Insira o primeiro n�mero: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo n�mero: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
			
			system("pause");
			menu();
		}
		void subtracao(){
			double num1, num2;
			printf("Insira o primeiro n�mero: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo n�mero: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
			
			system("pause");
			menu();
		}
		void mult(){
			double num1, num2;
			printf("Insira o primeiro n�mero: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo n�mero: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
			
			system("pause");
			menu();
		}
		void divisao(){
			double num1, num2;
			printf("Insira o primeiro n�mero: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo n�mero: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
			
			system("pause");
			menu();
		}
