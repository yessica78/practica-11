#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    char nombres[6][10] = {" jose ","teresa","mariana","mario","pedro","juan"};
    char alum[10];
    int cont=0;
 
    p("Ingrese el nombre del alumno: \n");
    s("%s", alum);
 
    int i;
 
    for(i=0; i<6; i++)
	{
            if (strncmp(nombres[i],alum)==0){  // compara el número mayor de nombres[i] con alum
 
                p("El alumno %s el strncmp igualara lo que se escribira con el arreglo\n", nombres[i]);
 
                }else{
                    cont++;
                }
            }
                    if (cont==6){
                        p("%s el nombre del alumno que no falto ",alum);
                    }
    return 0;
}
