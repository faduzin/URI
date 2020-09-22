#include <stdio.h>
int main() {
    int v, a, m;
    scanf("%d", &v);
    a=v/365;
    v=v-(365*a);
    m=v/30;
    v=v-(30*m);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, v);
    return 0;
}
