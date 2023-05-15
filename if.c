#include <stdio.h>

int main() {
    int password = 984845;
    int guess = 0;

    if (guess != password) {
        guess = password;
    }

    printf("Mot de passe en utilisant IF: %d\n", guess);

    return 0;
}
