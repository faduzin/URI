#include <stdio.h>
#include <string.h>
int main() {
    char ver[13], mam[13], vir[13];
    scanf("%s %s %s", ver, mam, vir);
    if(!strcmp(ver, "vertebrado")){
        if(!strcmp(mam, "ave")){
            if(!strcmp(vir, "carnivoro")){
            printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(!strcmp(vir, "herbivoro")){
                printf("vaca\n");
            }
            else{
                printf("homem\n");
            }
        }
    }
    else{
        if(!strcmp(mam, "inseto")){
            if(!strcmp(vir, "hematofago")){
            printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(!strcmp(vir, "hematofago")){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
