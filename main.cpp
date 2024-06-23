#include <stdio.h>
#include "password_generator.h"

#define PASSWORD_LENGTH 12  // Długość generowanego hasła

int main() {
    char password[PASSWORD_LENGTH + 1];  // +1 dla znaku null na końcu

    generate_password(password, PASSWORD_LENGTH);

    printf("Wygenerowane haslo: %s\n", password);

    return 0;
}