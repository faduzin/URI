#include <stdio.h>
int main() {
    float s, r;
    scanf("%f", &s);
    if(s >= 0 && s <= 400){
        r = s*0.15;
        s = s+r;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: 15 %%\n");
    }
    else{
        if(s > 400 && s <= 800){
            r = s*0.12;
            s = s+r;
            printf("Novo salario: %.2f\n", s);
            printf("Reajuste ganho: %.2f\n", r);
            printf("Em percentual: 12 %%\n");
        }
        else{
            if(s > 800 && s <= 1200){
                r = s*0.10;
                s = s+r;
                printf("Novo salario: %.2f\n", s);
                printf("Reajuste ganho: %.2f\n", r);
                printf("Em percentual: 10 %%\n");
            }
            else{
                if(s > 1200 && s <= 2000){
                    r = s*0.07;
                    s = s+r;
                    printf("Novo salario: %.2f\n", s);
                    printf("Reajuste ganho: %.2f\n", r);
                    printf("Em percentual: 7 %%\n");
                }
                else{
                    r = s*0.04;
                    s = s+r;
                    printf("Novo salario: %.2f\n", s);
                    printf("Reajuste ganho: %.2f\n", r);
                    printf("Em percentual: 4 %%\n");
            }
        }
    }
    }
    return 0;
}
