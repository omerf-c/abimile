#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int c;
    char cumle[80],cumle2[80];

    puts("Bir cumle giriniz: ");

    // Nokta'ya kadar oku
    while( (c = getchar()) != '.' && c != '\n' && c != EOF )
        cumle[i++] = c;

    cumle[i] = '\0';

    // Nokta'dan sonra oku
    if (c == '.') {
        while( (c = getchar()) != '\n' && c != EOF )
            cumle2[j++] = c;
    }
    cumle2[j] = '\0';

    puts("Girilen cumle oncesi:");
    puts(cumle);
    puts("Girilen cumle sonrasi:");
    puts(cumle2);

    return 0;
}