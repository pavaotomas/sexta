#include <stdio.h>

int main(void){
int num1;
int num2;
const int num = 15;

printf("Insere um numero:\n");
scanf("%d", &num1);
printf("Insere o segundo numero:\n");
scanf("%d", &num2);

if(num1 > num2 && num2 > num){
    printf("%d é maior do que %d e %d\n", num1, num2, num);

} else if(num2 > num1 && num1 > num){
    printf("%d é maior do que %d e %d\n", num2, num1, num);

} else if(num > num1 && num1 > num2){
    printf("%d é maior %d e do que %d\n", num, num1, num2);

} else if(num > num2 && num2 > num1){
    printf("%d é maior do que %d e %d\n", num, num2, num1);

} else if(num1 > num && num > num2){
    printf("%d é maior do que %d e do que %d\n", num1, num, num2);

} else if(num2 > num && num > num1){
    printf("%d é maior do que %d e %d\n");
} else {
    printf("Qualquer coisa\n");
    
}
return 0;
}