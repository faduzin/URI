#include <stdio.h>
int main() {
    int i, n, a;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        if(a==0) printf("NULL\n");
        else{
            if(!(a%2)) printf("EVEN ");
            else printf("ODD ");
            if(a>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
    }
    return 0;
}
