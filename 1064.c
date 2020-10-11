#include <stdio.h>
int main() {
    float n=0, m=0;
    int i, pos=0;
    for(i=0; i<6; i++){
        scanf("%f", &n);
        if(n>0){
            m += n;
            pos++;
        }
    }
    printf("%d valores positivos\n%.1f\n", pos, (m/pos));
    return 0;
}
