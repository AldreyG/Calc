
#include <stdio.h>

int main() {
   double valor_hora_aula, numero_aulas_mes, inss, salario_liquido, salario_bruto;

   printf("Informe o valor da hora aula: ");
   scanf("%lf", &valor_hora_aula);
   printf("Informe o número de aulas mes: ");
   scanf("%lf", &numero_aulas_mes);
   printf("Informe o percentual do INSS (apenas números): ");
   scanf("%lf", &inss);

   salario_bruto = valor_hora_aula * numero_aulas_mes;
   salario_liquido = salario_bruto - (inss/100)*salario_bruto;
   printf(" \n");
   printf("\n===================== Resultado =====================\n");
   printf("O salario bruto é: R$ %.2lf\n", salario_bruto);
   printf("O salario liquido é: R$ %.2lf\n", salario_liquido);
   printf(" \n");
   printf("Deseja realizar outra consulta? Y/N" );
    
    return 0;
}
