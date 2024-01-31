#include<stdio.h>
#include<stdlib.h>

//declaramos la funcion
int maximo(int n1, int n2);


//Ejercicio: Escribir una funcion que se llame maximo que reciba dos numeros y descida cual es el amyor de ellos




//Se manda llamar a la funcion que hace el proceso


//declaramos la funcion principal
int main(){
    //declarar variables
     int mayor, n1, n2;
     //invocar funcion maximo y pasarle el valor de nuestro parametros (paso por parametros)
     mayor=maximo(n1,n2);
     //imprimimos el resultado de la funcion
     printf("EL numero mayor es: %d\n", mayor);
    return 0;
}

//Funcion que hace el trabajo del proceso

int maximo(int n1, int n2){
    //declarar una variable para retornar
    int mayor;

    //pedir nuestros numeros
    printf("Introduce el numero 1: ");
    scanf("%d",&n1);
    printf("Introduce el numero 2: ");
    scanf("%d",&n2);
    
    //comparamos por medio de la condicion, se calcula
    if(n1>n2){
        mayor=n1;
    }else{
        mayor=n2;
    }

    //retornar el valor de la condicion
    return mayor;
}


//Nota: siempre hay que regresar una variable en elretorno.