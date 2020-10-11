#include <stdio.h>
int main() {
    int di, hi, mi, si, df, hf, mf, sf, dd, hd, md, sd;
    scanf("Dia %d\n%d : %d : %d\n", &di, &hi, &mi, &si);
    scanf("Dia %d\n%d : %d : %d", &df, &hf, &mf, &sf);
    dd = df - di;
    hd = hf - hi;
    md = mf - mi;
    sd = sf - si;
    if(hd < 0){
        hd += 24;
        dd--;
    }
    if(md < 0){
        md += 60;
        hd--;
    }
    if(sd < 0){
        sd += 60;
        md--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dd, hd, md, sd);
    return 0;
}
