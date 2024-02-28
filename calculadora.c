#include <stdio.h>

int main()
{
	int verificar = 1; 
	float num1, num2, soma, subtracao, multiplicacao, divisao;
	int n1, n2, resto;
	
	while(verificar == 1){
		printf("---------------------------------\n");
		printf("|       MENU CALCULADORA        |\n");
		printf("|                               |\n");
		printf("| 1- Somar                      |\n");
		printf("| 2- Subtrair                   |\n");
		printf("| 3- Multiplicar                |\n");
		printf("| 4- Dividir                    |\n");
		printf("| 5- Resto da Divisao           |\n");
		printf("| 6- Detectar Par/Impar         |\n");
		printf("| 7- Detectar Positivo/Negativo |\n");
		printf("| 8- Raiz Quadrada              |\n");
		printf("| 9- Porcentagem                |\n");
		printf("| 10- Potencia                  |\n");
		printf("| 11- Multiplos                 |\n");
		printf("| 12- Sair                      |\n");
		printf("---------------------------------\n");
		
		int escolha;
		
		printf("Escolha um numero correspondente a operacao: ");
		scanf("%d", &escolha);
		
		switch(escolha)
		{
		case 1:
			
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			soma = num1 + num2;
			printf("\n");
			printf("A soma de %.2f + %.2f e igual a: %.2f\n", num1, num2, soma);
			printf("\n");
			break;
		
		case 2:
			
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			subtracao = num1 - num2;
			printf("\n");
			printf("A subtracao de %.2f - %.2f e igual a: %.2f\n", num1, num2, subtracao);
			printf("\n");
			break;
		
		case 3:
			
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			multiplicacao = num1 * num2;
			printf("\n");
			printf("A multiplicacao de %.2f * %.2f e igual a: %.2f\n", num1, num2, multiplicacao);
			printf("\n");
			break;
		
		case 4:
			
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			divisao = num1 / num2;
			printf("\n");
			printf("A divisao de %.2f / %.2f e igual a: %.2f\n", num1, num2, divisao);
			printf("\n");
			break;
		
		case 5:
			
			printf("Digite o primeiro numero: ");
			scanf("%d", &n1);
			printf("Digite o segundo numero: ");
			scanf("%d", &n2);
			resto = n1 % n2;
			printf("\n");
			printf("O resto da divisao de %d / %d e igual a: %d\n", n1, n2, resto);
			printf("\n");
			break;
		
		case 6:
			
			printf("Digite um numero: ");
			scanf("%d", &n1);
			printf("\n");
			if(n1 % 2 == 0){
				printf("%d e um numero par.\n", n1);
				printf("\n");

			}else{
				printf("%d e um numero impar.\n", n1);
				printf("\n");
			}
			break;
		
		
		case 7:
			
			printf("Digite um numero: ");
			scanf("%d", &n1);
			printf("\n");
			
			if(n1 > 0){
				printf("%d e um numero positivo.\n", n1);
				printf("\n");

			}else if(n1 == 0){
				printf("O numero e = 0\n", n1);
				printf("\n");
			} else {
				printf("%d e um numero negativo.\n", n1);
				printf("\n");
			}
			break;
		
		default:
			verificar = 0;
			break;
		}
	}
	return 0;
}