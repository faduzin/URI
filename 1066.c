#include <stdio.h>
int main() {
    int i, par=0, imp=0, pos=0, neg=0, n=0;
    for(i=0; i<5; i++){
        scanf("%d", &n);
        if(n>0){
            pos++;
        }
        else if(n != 0){
            neg++;
        }
        if(!(n%2)){
            par++;
        }
        else{
            imp++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);
    return 0;
}
