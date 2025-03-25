#include <stdio.h>

void convertirMoneda(float cantidad, int opcionOrigen, int opcionDestino) {
    // Tasas de cambio (pueden cambiarse según la actualidad)
    float tasaGTQtoUSD = 0.13;  // 1 Quetzal = 0.13 USD
    float tasaGTQtoEUR = 0.12;  // 1 Quetzal = 0.12 EUR
    float tasaUSDtoGTQ = 7.85;  // 1 USD = 7.85 Quetzales
    float tasaUSDtoEUR = 0.92;  // 1 USD = 0.92 EUR
    float tasaEURtoGTQ = 8.50;  // 1 EUR = 8.50 Quetzales
    float tasaEURtoUSD = 1.08;  // 1 EUR = 1.08 USD

    float resultado = 0;

    if (opcionOrigen == 1 && opcionDestino == 2) {
        resultado = cantidad * tasaGTQtoUSD;  // GTQ a USD
    } else if (opcionOrigen == 1 && opcionDestino == 3) {
        resultado = cantidad * tasaGTQtoEUR;  // GTQ a EUR
    } else if (opcionOrigen == 2 && opcionDestino == 1) {
        resultado = cantidad * tasaUSDtoGTQ;  // USD a GTQ
    } else if (opcionOrigen == 2 && opcionDestino == 3) {
        resultado = cantidad * tasaUSDtoEUR;  // USD a EUR
    } else if (opcionOrigen == 3 && opcionDestino == 1) {
        resultado = cantidad * tasaEURtoGTQ;  // EUR a GTQ
    } else if (opcionOrigen == 3 && opcionDestino == 2) {
        resultado = cantidad * tasaEURtoUSD;  // EUR a USD
    } else {
        printf("Opción inválida. Inténtalo de nuevo.\n");
        return;
    }

    printf("El resultado de la conversión es: %.2f\n", resultado);
}

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;

    printf("===== Conversor de Monedas =====\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");

    printf("Elige la moneda de origen (1-3): ");
    scanf("%d", &opcionOrigen);

    printf("Elige la moneda de destino (1-3): ");
    scanf("%d", &opcionDestino);

    if (opcionOrigen < 1 || opcionOrigen > 3 || opcionDestino < 1 || opcionDestino > 3 || opcionOrigen == opcionDestino) {
        printf("Selección inválida. Debes elegir monedas diferentes.\n");
        return 1;
    }

    printf("Ingresa la cantidad a convertir: ");
    scanf("%f", &cantidad);

    if (cantidad <= 0) {
        printf("La cantidad debe ser mayor que 0.\n");
        return 1;
    }

    convertirMoneda(cantidad, opcionOrigen, opcionDestino);

    return 0;
}./
