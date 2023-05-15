#include <stdio.h>

int main() {

    int password = 984845;
    int guess = 0;

    do {
        guess++;
    } while (guess != password);

    printf("Mot de passe trouve en utilisant do...while : %d\n", guess);

    return 0;
}