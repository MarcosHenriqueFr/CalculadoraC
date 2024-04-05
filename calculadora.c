#include <stdio.h>//fazer uma calculadora, usando funções
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//vamos trabalhar com + - / *
#include <locale.h>

void menu();//declaramos as funções
void soma();
void subtracao();
void mult();
void divisao();

int main(){
	setlocale(LC_ALL, "portuguese");//puxamos da biblioteca locale.h para simbolos em português
	menu();//vamos trabalhar muito dentro da função menu
	return 0;
}

	void menu(){
		char nome[50];//cria uma array para o nome
		char alt;//uma variável para receber uma letra do usuário
		
		printf("Digite o seu nome: ");
		fgets(nome, 50, stdin);//pegamos o nome
		nome[strlen(nome) - 1] = '\0';//retiramos o \n do fgets usando a biblioteca string.h
		
		system("cls");//limpa a tela
		
		printf("Com qual operação, você quer trabalhar?\n");//configuração do menu
		printf("a) Soma\n");
		printf("b) Subtração\n");
		printf("c) Multiplicação\n");
		printf("d) Divisão\n");
		printf("e) Sair\n");
		scanf("%c", &alt);
		
		alt = tolower(alt);//pega o que está na variável alt e deixa em minúsculo, biblioteca ctype.h
		system("cls");
		
		switch(alt){//estamos analisando a variáavel alt
			case 'a':
				soma();//chamamos as funções com a escolha do usuário
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
				printf("Por favor, %s, insira um valor válido!!!\n", nome);
				system("pause");//pede para o usuário apertar enter para continuar o programa
				system("cls");
				menu();//volta para o menu depois que o usuário apertar enter
		}
	}
	
		void soma(){//definimos as funções
			double num1, num2;
			printf("Insira o primeiro número: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo número: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
			
			system("pause");
			menu();//chamamos o menu no fim de cada função
		}
		void subtracao(){
			double num1, num2;
			printf("Insira o primeiro número: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo número: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
			
			system("pause");
			menu();
		}
		void mult(){
			double num1, num2;
			printf("Insira o primeiro número: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo número: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
			
			system("pause");
			menu();
		}
		void divisao(){
			double num1, num2;
			printf("Insira o primeiro número: ");
			scanf("%lf", &num1);
			
			printf("Insira o segundo número: ");
			scanf("%lf", &num2);
			
			printf("O resultado de %.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
			
			system("pause");
			menu();
		}
