#include <stdio.h>
int main ()
{
    int pulsos, compases, sobrantes;
    printf("ingresa la cantidad de pulsos:");
    scanf("%d", &pulsos);
    compases = pulsos/4;
    sobrantes = pulsos%4;
    printf("compases completos:%d\n",compases);
    printf("pulsos sobrantes:%d\n",sobrantes);
    return 0;

}