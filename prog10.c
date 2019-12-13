#include <stdio.h>

int main(void){
char nome[100];
int ano = 2019;
int nascimento;
int idade;
printf("Insira o seu nome:\n");
scanf("%s", nome);
printf("Insira o seu ano de nascimento:\n");
scanf(" %d", &nascimento);

idade = ano - nascimento;

if(idade >= 10 && idade <=18){

switch (idade){
    case 10:
    case 11:
    case 12:
    printf("Nome: %s \n Idade: %d \n Equipas: A, B \n",nome ,idade);
    break;
    //outro caso
    case 13:
    case 14:
    case 15:
    printf("Nome: %s \n Idade: %d \n Equipas: B, C \n", nome, idade);
    break;
    // outro caso
    case 16:
    case 17:
    case 18:
    printf("Nome: %s \n Idade: %d \n Equipas: C, D \n", nome, idade);
}
}else{
    printf("You are trash, no equipa to you jogar!\n");
}
    return 0;
}
      

