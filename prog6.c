#include <stdio.h>

int main(){
    float bruto;
    char nome[50];
    float taxa;
    float liquido;

printf("Nome:\n");
scanf("%s" , nome);
printf("Salário Bruto:\n");
scanf("%f" , &bruto);

if(bruto<1000){
    taxa = 0.05;
}else if(bruto > 5000){
    taxa = 0.35;
}else{
    taxa = 0.11;
}
liquido = bruto - (bruto * taxa);
printf("\nNome: %s\nBruto: %.2f\nTaxa:%.2f\nLiquido:%.2f\n", nome, bruto, taxa,liquido);
return 0;
}