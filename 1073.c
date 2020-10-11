#include <stdio.h>
int main() {
    int n, i, a=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        a++;
        if(!(a%2)){
            printf("%d^2 = %d\n", a, a*a);
        }
    }
    return 0;
}
