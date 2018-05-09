#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[3][3],b[3][3],c[3][3],x,y;
	
printf("primer matriz [3x3]");
for(x=1;x<=3;x++)//fila
   for(y=1;y<=3;y++)//columnas
   {
   	printf("\n Introducir valor de [%d][%d]:",x,y);
   	scanf("%d",&a[x][y]);	
   }
system("cls");
printf("Segunda matriz [3x3]");
for(x=1;x<=3;x++)//fila
   for(y=1;y<=3;y++)//columnas
   {
   	printf("\n Introducir valor de [%d][%d]:",x,y);
   	scanf("%d",&a[x][y]);	
   }
system("cls");
for (x=1;x<=3;x++)// fila
     for(y=1;y<=3;y++)//columnas
     c[x][y]=(a[x][1]*b[1][y])+(a[x][2]+b[2][y])+(a[x][3]*b[3][y]);

 for (x=1;x<=3;x++)// fila
 {
     for(y=1;y<=3;y++)//columnas
         printf("%d", c[x][y]);
    printf("\n");
  }
  system("pause");
}

     

