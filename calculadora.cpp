#include <stdio.h>

float soma(float a, float b){
	float res= a+b;
	return res;
}
float subtrair(float a, float b){
	float res= a-b;
	return res;
}
float multiplicar(float a, float b){
	float res= a*b;
	return res;
}
float dividir(float a, float b){
	float res= a/b;
	return res;
}
main(){
	float a;
	float b;
	int opcao;
	float res;
	

	while(opcao!=5){
	printf("Escolha a operacao para seu calculo:\n 1-Somar \n 2-subtrair\n 3-multiplicar \n 4-divir\n 5-Sair\n");
	scanf("%d", &opcao);
	printf("Insira o valor: ");
	scanf("%f", &a);
	printf("Insira o valor: ");
	scanf("%f", &b);
   switch (opcao) {
	case 1:
	    res=soma(a,b);
	    break;
	case 2:
	 	res=subtrair(a,b);
	 	break;
	case 3:
		res=multiplicar(a,b);
		break;
	case 4:
		res=dividir(a,b);
		break;
	case 5:
		printf("operacao finalizada.");
		break;
	

}
printf("O valor: %.2f\n", res);

}
return 0;
}
 

