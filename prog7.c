#include <stdio.h>

int main(){
    
    char nome[50];
    float taxa;
    char civ;

printf("Nome:\n");
scanf("%s" , nome);
printf("Insira o seu estado civil(s,c,u,d):\n");
scanf(" %c" , &civ);

if(civ=='s' || civ == 'S'){
    taxa = 0.25;
} else if(civ=='c' || civ=='C'){
    taxa = 0.22;
} else if(civ=='u' || civ=='U'){
    taxa = 0.19;
} else if(civ=='d' || civ=='D'){
    taxa = 0.18;
}else{
    taxa = 0.09;
}
printf("Nome: %s\nA Taxa de IRS é: %.2f\n" , nome , taxa);
return 0;
}