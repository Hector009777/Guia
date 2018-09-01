#include <stdio.h>
 
 
int main(int argc, char** args){
  int a, b, c, d, i, j, k;
  printf("Renglones de la matriz  A-->");
  scanf("%d", &a);
  printf("Columnas de la matriz  A-->");
  scanf("%d", &b);
  printf("Renglones de la matriz B-->");
  scanf("%d", &c);
  printf("Columnas de la matriz  B-->");
  scanf("%d", &d);
  if(b!=c){
             printf("No se puede realizar la multiplicacion\n");
            
             return 0;
  }
  int A[a][b], B[c][d], C[a][d]; 
  for(i=0;i<a;i++){
      for(j=0;j<b;j++){
          printf("Ingrese el valor de la matriz 1 (%d, %d)-->",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<c;i++){
      for(j=0;j<d;j++){
          printf("Ingrese el valor de la matriz 2 (%d, %d)-->", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }
 
  for(i=0;i<a;i++){
      for(j=0;j<d;j++){
          C[i][j]=0;
          for(k=0;k<b;k++){
              C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
          }
      }
  }
 

  printf("\n\n\t\t\t Matriz A");
  printf("\n");
  for(i=0;i<a;i++){
      printf("\n\t\t");
      for(j=0;j<b;j++){
          printf("  %6d  ", A[i][j]);
      }
  }
  printf("\n\n\t\t\t Matriz B");
  printf("\n");
  for(i=0;i<c;i++){
      printf("\n\t\t");
      for(j=0;j<d;j++){
          printf("  %6d  ", B[i][j]);
      }
  }
 
  printf("\n\n\t\t\t Matriz C");
  printf("\n");
  for(i=0;i<a;i++){
      printf("\n\t\t");
      for(j=0;j<d;j++){
          printf("  %6d  ", C[i][j]);
      }
  }
  printf("\n");
}
