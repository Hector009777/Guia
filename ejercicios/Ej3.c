#include <stdio.h>
	#include <stdlib.h>
	
	int main() {
     int n=0,menu=0;
     printf("Ingrese un tamaño\n");
        scanf("%d",&n);
         int vector[n];
        for(int i=0;i<n;i++){
              vector[i]=0;
              
         }
    
   
    
    do{
         printf("Vector:");
         for(int j=0;j<n;j++){
              printf("[%d] ",vector[j]);
              
         }
         
         printf("\n");
         printf("-----------\n");
         printf("¿Que desea realizar?\n");
          printf("1.Agregar un dato\n");
           printf("2.Buscar un valor en el vector\n");
            printf("3.Editar\n");
            printf("4.Eliminar\n");
            printf("-----------\n");
            scanf("%d",&menu);
            
           if(menu==1){
              int posi=0,dato=0;
               do{
           printf("En que posicion desea agregar el dato de posicion 0 a posicion %d \n ",n-1);
            scanf("%d",&posi);
               }while(posi>n-1);
               
                printf("Ingrese el numero \n ");
                scanf("%d",&dato);
                vector[posi]=dato;
                printf("Hecho"); 
                printf("\n");
           } else if(menu==2){
               int dato=0,enc=0;
              
               
                printf("Ingrese el numero a buscar\n ");
                scanf("%d",&dato);
                
                for(int j=0;j<n;j++){
                    if(dato==vector[j]){
                         enc=1;
                         printf("El numero ingresado esta en la posicion %d \n ",x);
                    }
                        
                 }
                if(enc==0){
                        printf("El numero no existe\n");
                        }
                    enc=0;
                        printf("\n");
           } else if(menu==3){
               
             int dato=0,nuevo=0,enc=0;
                printf("Ingrese el numero a editar\n ");
                scanf("%d",&dato);
                for(int j=0;j<n;j++){
                    if(dato==vector[j]){
                        enc=1; 
                        printf("El numero nuevo \n ");
                         scanf("%d",&nuevo);
                         vector[j]=nuevo;
                    }
                }
                if(enc==0){
                        printf("El numero no existe\n");
                        }
                 enc=0;   
               printf("\n");
               
           } else if(menu==4){
               
               int dato=0,enc=0;
                printf("Ingrese el numero a eliminar\n ");
                scanf("%d",&dato);
                for(int j=0;j<n;j++){
                    if(dato==vector[j]){
                        enc=1;
                        vector[j]=0;
                         printf("Eliminado!\n ");
                         
                    }
                }
                 if(enc==0){
                        printf("El numero no existe\n");
                        }
                enc=0;
               
           } 
            
            printf("\n");
             printf("-------------\n");
            
    }while(menu<=4);
    
    
return (0);
    
}

