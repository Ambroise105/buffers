// Inclut la bibliothèque standard d'entrée/sortie pour utiliser la fonction printf
#include <stdio.h>

// La fonction principale du programme
int main() {
printf("\033[34;01m /$$$$$$$                                /$$                 /$$$$$$$$                 \n");
printf("| $$__  $$                              | $$                | $$_____/                 \n");
printf("| $$  | $$  /$$$$$$  /$$   /$$  /$$$$$$$| $$  /$$$$$$       | $$     /$$$$$$   /$$$$$$ \n");
printf("| $$$$$$$  /$$__  $$| $$  | $$ /$$_____/| $$ /$$__  $$      | $$$$$ /$$__  $$ /$$__  $$\n");
printf("| $$__  $$| $$  | $$| $$  | $$| $$      | $$| $$$$$$$$      | $$__/| $$  | $$| $$  |__/\n");
printf("| $$  | $$| $$  | $$| $$  | $$| $$      | $$| $$_____/      | $$   | $$  | $$| $$      \n");
printf("| $$$$$$$/|  $$$$$$/|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$      | $$   |  $$$$$$/| $$      \n");
printf("|_______/  |______/  |______/  |_______/|__/ |_______/      |__/    |______/ |__/\033[00m\n\n");
    // Déclare et initialise la variable 'password' avec la valeur 984845
    int password = 984845;
    // Déclare la variable 'guess' qui sera utilisée pour essayer différentes valeurs
    int guess;

    // Utilise une boucle 'for' pour incrémenter 'guess' à chaque itération
    // La boucle continue tant que 'guess' est différent de 'password'
    for (guess = 0; guess != password; guess++) {
        // Le corps de la boucle est vide car nous n'avons pas besoin de faire
        // autre chose que d'incrémenter 'guess' pour chaque itération
    }
// Affiche le mot de passe trouvé en utilisant la boucle 'for'
printf("Mot de passe trouve avec for: %d\n", guess);
}
    // Retourne 0 pour indiquer que le programme s'est terminé
