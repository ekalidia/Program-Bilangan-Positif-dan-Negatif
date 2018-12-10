#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf(" * Menentukan Bilangan Positif atau Negatif*\n ");
    printf(" masukan angka = " );
    scanf(" %B ", &a);

    if(a > 0)

    printf(" %B adalah bilangan Positif", a);

    else printf("%B adalah bilangan Negatif", a);
        getch();
}
