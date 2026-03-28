#include <stdio.h>

int main (int argc, char *argv[]) {
    int ini, fin, incre, i;
    do
    {
        printf("Ingrese el numero inicial: ");
        scanf("%d", &ini);
    } while (ini>0);
    
    do
    {
        printf("Ingrese el numero final (Tiene que ser mayor que el inicial): ");
        scanf("%d", &fin);
    } while (fin <= ini);

    printf("Ingrese el incremento: ");
    scanf("%d", &incre);

    if (incre>0)
    {
        for (int i = ini; i <= fin; i += incre) {
            printf("%d ", i);
        }
    }
    else
    {
        printf("El incremento debe ser mayor a 0\n");
    }
    
    
        
    return 0;
}