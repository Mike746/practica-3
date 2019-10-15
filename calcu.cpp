#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void imprimir_menu();
void leer_opcion(int &opt);
int suma(int x, int y);
int resta (int x, int y);
int multiplicacion (int x, int y);
int division (int x, int&  y);
int leer_valor();
int main (){
int a,b,c;
int opt;
char regreso;
do {
imprimir_menu();
leer_opcion(opt);
a=leer_valor();
b=leer_valor();
switch (opt){
case 1:
    c=suma(a,b);
    break;
case 2:
    c=resta(a,b);
    break;
case 3:
    c=multiplicacion(a,b);
    break;

case 4:
    c=division(a,b);
    break;
default:
    printf("opcion invalida \n");
}
printf("tu resultado es: %d \n", c);
printf ("quieres hacer otra operacion: S N \n");
regreso=getch();
}
while (regreso=='s'|| regreso=='S');
}

void imprimir_menu(){
printf ("1.-suma \n");
printf ("2.-resta \n");
printf ("3.-multiplicacion \n");
printf ("4.-division \n");
}
void leer_opcion (int &opt){
printf ("introduce una opcion \n");
scanf ("%d", &opt);
}
int suma(int x, int y){
return x+y;
}
int resta(int x, int y){
return x-y;
}
int multiplicacion(int x, int y){
return x*y;
}
int division(int x, int &y){
    while (y==0){
        y=leer_valor();
    }
return x/y;
}
int leer_valor(){
int temp;
printf ("introduce el valor:");
scanf ("%d", &temp);
return temp;
}



