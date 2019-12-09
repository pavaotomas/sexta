#include <stdio.h>

void main (){
    printf(R"EOF(

██╗  ██╗ █████╗ ██████╗ ███████╗
╚██╗██╔╝██╔══██╗██╔══██╗██╔════╝
 ╚███╔╝ ███████║██████╔╝█████╗  
 ██╔██╗ ██╔══██║██╔══██╗██╔══╝  
██╔╝ ██╗██║  ██║██║  ██║███████╗
╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝        
    
        )EOF");
int A;
int B;
printf("Este programa compara dois nuemros!\n");
printf("Isira o primeiro numero ?\n");
scanf("%d" , &A);
printf("Isira o segundo numero ?\n");
scanf("\t%d" , &B);

if(A==B){
printf("\t%d e %d são iguais\n", A , B);
}else{
if(A<B){
    printf("\t%d é menor do que %d\n" , A , B);
}else{
printf("%d é maior do que %d\n" , A , B);
}
}
}
