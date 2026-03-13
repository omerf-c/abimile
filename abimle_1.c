#include <stdio.h>
#include <string.h>
#define N 10
#include <ctype.h>


int main() {

    int i=0,count=0;
    char trupin[N];
   const char const pin[N] = "3647549";
    char *p;
p=&pin;

printf("hint:");
   while(*p!='\0') {
    if (isdigit(p) == 0) {
        count++;
    }
     p++;
    }
    printf("your password is %d digits long .\n",count);



        do {
            printf("enter your password: ");
            fgets(trupin,7,stdin);

            }while (strcmp(pin,trupin)!=0);
    printf("welcome");



return 0;
}
