#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que pida 4 cadenas por teclado y las muestre por la salida separadas por un "-".
int main(int argc, char *argv[])
{

char cadenal [50], cadena2 [50], cadena3 [50], cadena4 [50];
printf ("Introduce la cadena 1\n");

gets (cadenal);

printf ("Introduce la cadena 2\n");

gets (cadena2) ;

printf ("Introduce la cadena 3\n");

gets (cadena3) ;

printf ("Introduce la cadena 4\n");

gets (cadena4);

printf ("%s-%s-%s-%s",cadenal, cadena2, cadena3, cadena4);
}