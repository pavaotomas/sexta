#include <stdio.h>
int main(void){
    char estado;
    char nome[100];

printf("Insira o seu nome:\n");
scanf( "%s" , nome);
printf("Insira o seu estado civil('S','C','U','D','V')\n");
scanf(" %c", &estado);
if (estado == 's' || estado == 'S'|| estado == 'c' || estado == 'C' || estado == 'u' || estado == 'U' || estado == 'v' || estado == 'V' || estado == 'd' || estado == 'D'){
switch (estado)
{
   case 's':
   case 'S':
     printf("Estado Civil: Solteiro\n");
   break;

   case 'd':
   case 'D':
     printf("Estado Civil: Divorciado\n");
   break;

    case 'V':
    case 'v':
     printf("Estado Civil: Viuvo\n");
   break;

    case 'c':
    case 'C':
     printf("Estado Civil: Casado\n");
   break;

   case 'U':
   case 'u':
     printf("Estado Civil: União\n");
   break;
}
}else{
    printf("Insira um valor valido!!\n");
}
return 0;
}