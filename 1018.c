#include <stdio.h>
int main() {
    int c, v, hun, fif, twe, ten, fiv, two;
    scanf("%d", &v);
    c=v;
    hun=c/100;
    c=c-(hun*100);
    fif=c/50;
    c=c-(fif*50);
    twe=c/20;
    c=c-(twe*20);
    ten=c/10;
    c=c-(ten*10);
    fiv=c/5;
    c=c-(fiv*5);
    two=c/2;
    c=c-(two*2);
    printf("%d\n", v);
    printf("%d nota(s) de R$ 100,00\n", hun);
    printf("%d nota(s) de R$ 50,00\n", fif);
    printf("%d nota(s) de R$ 20,00\n", twe);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", fiv);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", c);
    return 0;
}
