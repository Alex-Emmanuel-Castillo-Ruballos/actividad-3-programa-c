#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Conversor de Monedas\n");
    printf("1. Convertir de Quetzales a Dolares\n");
    printf("2. Convertir de Quetzales a Euros\n");
    printf("3. Convertir de Dolares a Quetzales\n");
    printf("4. Convertir de Dolares a Euros\n");
    printf("5. Convertir de Euros a Quetzales\n");
    printf("6. Convertir de Euros a Dolares\n");
    printf("Elija una opcion (1-6): ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1: // Quetzales a Dólares
            resultado = cantidad / 7.70; // 1 USD = 7.70 GTQ
            printf("%.2f Quetzales son %.2f Dolares.\n", cantidad, resultado);
            break;
        case 2: // Quetzales a Euros
            resultado = cantidad / 8.41; // 1 EUR = 8.41 GTQ
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
            break;
        case 3: // Dólares a Quetzales
            resultado = cantidad * 7.70; // 1 USD = 7.70 GTQ
            printf("%.2f Dolares son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4: // Dólares a Euros
            resultado = cantidad * 0.92; // 1 USD = 0.92 EUR
            printf("%.2f Dolares son %.2f Euros.\n", cantidad, resultado);
            break;
        case 5: // Euros a Quetzales
            resultado = cantidad * 8.41; // 1 EUR = 8.41 GTQ
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 6: // Euros a Dólares
            resultado = cantidad / 0.92; // 1 EUR = 0.92 USD
            printf("%.2f Euros son %.2f Dolares.\n", cantidad, resultado);
            break;
        default:
            printf("Opcion invalida.\n");
            break;
    }

    return 0;
}