#include<stdio.h>
#include<stdlib.h>

//declaramos nuestra funcion
float promedio(float a, float b);

//declaramos una variable global de prom, para usarlo en los dos metodos
float prom;

//declaramos la funcion principal
float main(){
    float a=5, b=10;
    prom=promedio(a,b);
    printf("EL promedio es: %2.1f\n",prom);
    return 0;
}

//declaramos la funcion promedio y el proceso
float promedio(float a, float b){
    a=a+3;
    b=b+3;
    prom=(a+b)/2;
    return prom;
}