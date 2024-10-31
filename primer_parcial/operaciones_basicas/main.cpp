#include<stdio.h>
#include<conio.h>

int main(){
int num1, num2, tot;
printf("Dame un numero: ");
scanf("%d",&num1);
printf("Dame un numero: ");
scanf("%D",&num2);

tot=num1+num2;
printf("La suma es: %d",tot);
getch();

tot=num1-num2;
printf("\nLa resta es: %d",tot);
getch();

tot=num1*num2;
printf("\nLa multiplicacion es: %d",tot);
getch();

tot=num1/num2;
printf("\nLa division es: %d",tot);
getch();
}
