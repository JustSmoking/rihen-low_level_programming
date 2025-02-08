#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    while (i < 10) 
    {
        // boucle infinie car la condition d'arret n'est jamais atteinte
        putchar(i);
        // Rajouter i++ ou tout autre operation permettante d'atteindre la valeur 10
    }
    printf("Infinite loop avoided! \\o/\n");
    return (0);

}