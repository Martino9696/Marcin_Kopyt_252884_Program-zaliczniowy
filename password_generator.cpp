//
// Created by kopyt on 09.06.2024.
//
#include "password_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define PASSWORD_LENGTH 12  // Długość generowanego hasła

void generate_password(char *password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int charset_size = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int key = rand() % charset_size;
        password[i] = charset[key];
    }
    password[length] = '\0';  // Zakończ hasło znakiem null
}