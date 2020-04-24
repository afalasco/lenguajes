#include <stdio.h>
#include <stdlib.h>
/*
Alumno:
Curso:
Grupo:
*/

//Prototipos de las funciones
int menu();
float rectangulo(float base,float altura);
float cuadrado(float lado);

int main()
{
    int op=0;
    while (op!=3) {
        op=menu();
        if (op==1) {
            float area,base,altura;
            printf("Ingrese la base y la altura del rectangulo\n");
            scanf("%f%f",&base,&altura);
            area=rectangulo(base,altura);
            printf("El valor del area del rectangulo es %f\n",area);
            system("pause"); // Pausa
            system("cls"); // Borra pantalla
        }
        if (op==2) {
            float area,lado;
            printf("Ingrese el lado del cuadrado\n");
            scanf("%f",&lado);
            area=cuadrado(lado);
            printf("El valor del area del cuadrado es %f\n",area);
            system("pause"); // Pausa
            system("cls"); // Pantalla
        }
    }
    return 0;
}

int menu() {
// Función del menu
int opcion;
printf("1. Area de rectangulo\n");
printf("2. Area de cuadrado\n");
printf("3. Salir\n");
scanf("%d",&opcion);
return opcion;
}

float rectangulo(float base, float altura) {
//Area del rectangulo
float area;
area=base*altura;
return area;
}

float cuadrado(float lado) {
//Area del cuadrado
return lado*lado;
}
