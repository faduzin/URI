#include <stdio.h>

int main(){
    int i,j,k=0,n,somal=0,somac=0,x=0,c=0,sq=0,l=0,v[10];
    int m[9][9];
    scanf("%d",&n);
    while(c<n){
        for(i=0; i<=9; i++){
            v[i]=0;
        }
        for(i=0; i<9; i++){
            for(j=0; j<9; j++){
                scanf("%d", &m[i][j]);
            }
        }
        for(i=0; i<9; i++){
            somal=0;
            somac=0;
            for(j=0; j<9; j++){
                somal+=m[i][j];
                somac+=m[j][i];
                v[m[i][j]]++;
                }
            if(somal!=45 || somac!=45){
                i=9;
                x=1;
            }
        }
        while(l<=6){
            k=0;
            while(k<=6){
                sq=0;
                for(i=l; i<3+l; i++){
                    for(j=k; j<3+k; j++){
                        sq+=m[i][j];
                    }
                }
                if(sq!=45){
                    l=6;
                    x=1;
                }
                k=k+3;
            }
            l=l+3;
        }
        for(i=1; i<=9; i++){
            if(v[i]!=9){
                x=1;
                i=9;
            }
        }
        if(x==0){
            printf("Instancia %d\n", c+1);
            printf("SIM\n\n");
        }
        else{
            printf("Instancia %d\n", c+1);
            printf("NAO\n\n");
        }
        c++;
    }
    return 0;
}
