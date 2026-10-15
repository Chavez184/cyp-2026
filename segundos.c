#include <stdio.h>

int main(void) {
    int segundos = 0;
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segundos_restantes = segundos % 60;

    printf("%d segundos son equivalentes a %d horas, %d minutos y %d segundos.\n", 
           segundos, horas, minutos, segundos_restantes);

    return 0;
}
  