#include <iostream>
#include <cctype>

int main() {
    char password[9]; // Arreglo para almacenar la contraseña (máximo 8 caracteres + terminador nulo)

    printf("Ingrese una contraseña de al menos 5 caracteres y máximo 8 caracteres: ");
    scanf("%s", password);

    // Validar la contraseña
    int i = 0;
    while (password[i] != '\0') {
        if (!isalnum(password[i]) || password[i] == '0') {
            printf("Error: La contraseña contiene caracteres no alfanuméricos o el número 0. Corrigiendo...\n");
            // Corregir la contraseña reemplazando los caracteres no válidos por 'a'
            password[i] = 'a';
        }
        i++;
    }

    // Asegurarse de que la contraseña tenga al menos 5 caracteres
    while (i < 5) {
        password[i] = 'a'; // Rellenar con 'a' si la longitud es menor a 5
        i++;
    }

    // Truncar la contraseña si tiene más de 8 caracteres
    if (i > 8) {
        password[8] = '\0';
    }

    printf("Contraseña corregida: %s\n", password);

    return 0;
}
