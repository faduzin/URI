#include <stdio.h>
int main() {
    int ini, fin;
    scanf("%d %d", &ini, &fin);
    if(ini > fin)
    printf("O JOGO DUROU %d HORA(S)\n", 24 - (ini - fin));
    else if(fin> ini)
    printf("O JOGO DUROU %d HORA(S)\n", fin - ini);
    else
    printf("O JOGO DUROU 24 HORA(S)\n");
    return 0;
}
