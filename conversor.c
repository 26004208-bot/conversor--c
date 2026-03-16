#include <stdio.h>

int main() {

    int opcion;
    float cantidad;

    float quetzal_dolar = 0.13;
    float quetzal_euro = 0.12;
    float dolar_quetzal = 7.8;
    float euro_quetzal = 8.4;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {

        case 1:
            printf("Resultado: %.2f dolares\n", cantidad * quetzal_dolar);
            break;

        case 2:
            printf("Resultado: %.2f euros\n", cantidad * quetzal_euro);
            break;

        case 3:
            printf("Resultado: %.2f quetzales\n", cantidad * dolar_quetzal);
            break;

        case 4:
            printf("Resultado: %.2f quetzales\n", cantidad * euro_quetzal);
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}