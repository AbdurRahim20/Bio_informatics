#include<stdio.h>

int main(){

    char dna[100];
    gets(dna);
    int i,A=0,T=0,G=0,C=0;
    int len = strlen(dna);

    for(i=0;i<len;i++){

        if (dna[i]=='A')
            A++;
        else if (dna[i]=='T')
            T++;
        else if (dna[i]=='G')
            G++;
        else if (dna[i]=='C')
            C++;
    }
    printf("A= %d T=%d G=%d C=%d",A,T,G,C);
}
