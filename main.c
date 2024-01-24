#include <stdio.h>

int main(void) {
  //variáveis
  char operacao;
  double num1,num2,resultado;

  //leitura de dados das operações
  printf("Digite qual a operação: +,- , / ,* \n");
  scanf("%c",&operacao);
  printf("%c\n",operacao);
  
  //leitura de dados dos valores
  printf("digite valor 1: ");
  scanf("%lf",&num1);
  printf("digite valor 2: ");
  scanf("%lf",&num2);
  

  //condição
  switch (operacao){
    case '+':
      resultado = num1 + num2;
    break;
    
    case '-':
      resultado = num1 - num2;
    break;

    case '/':
        if (num2 == 0){
          printf("divisão por 0 não é permitido");
          return 1;
        }
        else{
          resultado = num1 / num2;
          break;
        }
      
    case '*':
      resultado = num1 * num2;
    break;

    default:
    printf("erro - operação inválida");
    return 1;
  }
  
  //Exibe os resultados
  printf("%.2lf %c %.2lf = %.2lf",num1,operacao, num2,resultado);
  return 0;
}