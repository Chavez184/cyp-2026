#include <stdio.h>

int main(void)
{
    float masa;
    float masa_molar;
    float litros;
    float moles;
    float molaridad;

    printf("Ingrese la masa (g): ");
    scanf("%f", &masa);

    printf("Ingrese la masa molar (g/mol): ");
    scanf("%f", &masa_molar);

    printf("Ingrese los litros (L): ");
    scanf("%f", &litros);

    moles = masa / masa_molar;
    molaridad = moles / litros;

    printf("La molaridad es: %.2f M\n", molaridad);
    return 0;
}