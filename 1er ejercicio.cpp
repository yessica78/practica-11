#include <stdio.h>
int arreglo[] = {20,19,12,17,16,36,14,13,23,31};
int i, j, n, aux;
main() {
n = 10;
for(i=1; i<n; i++) {
	j = i;
	aux = arreglo[i];
	while(j>0 && aux<arreglo[j-1]) {
		arreglo[j] = arreglo[j-1];
		j=j-1;
	}
	arreglo[j] = aux;
}
printf("\n\nLos elementos obtenidos del arreglo son: \n");
for(i=0; i<n; i++) {
	printf("Elemento [%d]: %d\n", i, arreglo[i]);
}
return 0;
}

