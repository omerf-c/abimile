#include <stdio.h>

int main() {
    FILE *dosya;
    char name[50];
    int not;
    dosya = fopen("notlar.txt", "w+");
    if(dosya == NULL) {
        printf("Dosya acilamadi");
        return 1;
    }
    printf("Adinizi giriniz: ");
    fgets(name,50,stdin);
    printf("Notunuzu giriniz: ");
    scanf("%d", &not);
    fprintf(dosya, "%s: %d\n", name, not);
    fclose(dosya);

    printf("Dosyaya yazildi!");

    return 0;
}