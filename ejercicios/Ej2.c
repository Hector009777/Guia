#include <stdio.h>

int main(){
    int p [3][3];
    int s [3][3];
    int fila,columna;
    
    for(fila=0;fila<3:fila++){
        for(columna=0;columna<3;columna++){
        printf("Ingrese un valor: ");
        scanf("%d",&a[fila][columna]);
        }
    }
    for(fila=0;fila<3;fila++){
        printf("\n");
        for(columna=0;columna<3;columna++){
        printf("%d\t",p[fila][columna]);
        }
    }
    for(fila=0;fila<3;fila++){
        for(columna=0;columna<3;columna++){
        s[columna][fila]=p[fila][columna];
        }
        }
        printf("Matriz B\n");
        for(fila=0;fila<3;fila++){
        printf("\n");
        for(columna=0;columna<3;columna++){
        printf("%d\t",p[columna][fila]);
    }
    }
    return 0;
    }    
          
