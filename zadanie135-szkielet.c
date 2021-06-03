#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PROSTOKAT 1
#define OPCJA_TROJKAT   2
#define OPCJA_WYJSCIE   0

void prostokat();
void trojkat();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PROSTOKAT,  " - pole prostok¹ta");
        printf("%d %s\n", OPCJA_TROJKAT,    " - pole trójk¹ta");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        if(scanf("%d", &wybrana_opcja)==0)
            exit(EXIT_FAILURE);
        else
        {
            switch(wybrana_opcja) {
                case OPCJA_PROSTOKAT:
                    prostokat();
                    break;
                case OPCJA_TROJKAT:
                    trojkat();
                    break;
                case OPCJA_WYJSCIE:
                  wyjscie_z_programu = TRUE;
                   break;
                default:
                    printf("Niepoprawny kod polecenia.\n");
        }
        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void prostokat() {
    /* TODO - osoba2 */

    /* TODO - właściwe obliczanie pola zrealizować poprzez dedykowaną funkcję */
    printf("\npole prostok¹ta - TODO\n\n");
}

void trojkat() {
    /* TODO - osoba3 */
float a, h, wynik;
    printf("podaj a: \n");
    if(scanf("%f", &a)==0)
        {
        printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(a<=0)
    {

        printf("podaj a wieksze od 0\n");
        exit(EXIT_FAILURE);
    }
    }
    printf("podaj h: \n");
    if(scanf("%f", &h)==0)
        {
        printf("podaj cyfre");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(h<=0)
    {

        printf("podaj h wieksze od 0\n");
        exit(EXIT_FAILURE);
    }
    }
    wynik= ((a * h)/2.0);


    /* TODO - właściwe obliczanie pola zrealizować poprzez dedykowaną funkcję */
    printf("%s\n" "%.2f" "%s", "pole trojkata - ", wynik, "\n\n" );
}
