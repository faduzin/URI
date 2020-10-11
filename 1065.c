#include <stdio.h>
int main() {
    int i, n=0, par=0;
    for(i=0; i<5; i++){
        scanf("%d", &n);
        if(!(n%2)){
            par++;
        }
    }
    printf("%d valores pares\n", par);
    return 0;
}
