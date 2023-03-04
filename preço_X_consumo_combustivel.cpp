#include<stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double media,preco1,consumo1,preco2,consumo2,postoA,postoB;
		
	printf("Informe o preço do posto A:\n");
	scanf("%lf",&preco1);		
	printf("Informe o consumo de gasolina no posto A:\n");	
	scanf("%lf",&consumo1);
	
	postoA= preco1/consumo1;
	
	printf("Custo por posto A : %lf\n",postoA);
	
	printf("Informe o preço do posto B:\n");
	scanf("%lf",&preco2);		
	printf("Informe o consumo de gasolina no posto B:\n");	
	scanf("%lf",&consumo2);
	
	postoB=preco2/consumo2;
	printf("Custo por posto B : %lf\n",postoB);
	
	if(postoA<postoB){
		printf("Abastecer posto A\n",postoA);
	}
	
	if(postoA>postoB){
		printf("Abastecer posto B\n",postoB);
	}
	
	
		

		

	
	
return 0;
}
