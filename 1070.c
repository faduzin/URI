#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    if(!(n%2)){
        n++;
    }
    n-=2;
    for(i=0; i<6; i++){
        n+=2;
        printf("%d\n", n);
    }
    return 0;
}
