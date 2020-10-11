#include <stdio.h>
int main() {
    int inih, inim, fimh, fimm, durh, durm;
    scanf("%d %d %d %d", &inih, &inim, &fimh, &fimm);
    durh = fimh - inih;
    if(durh <= 0){
        durh = 24 + durh;
    }
    durm = fimm - inim;
    if(durm < 0){
        durm = 60 + durm;
        durh--;
    }
    if(durh == 24 && durm != 0){
        durh = fimh - inih;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durh, durm);
    return 0;
}
