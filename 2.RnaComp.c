// A-U, U-A, G-C, C-G
/*
Sample input: AACGUAGGCUC
        output; UUGCAUCCGAG
*/
#include<stdio.h>
int main(){

    char rna[100];
    gets(rna);

    int len = strlen(rna);
    int i;

    for(i=0;i<len;i++){

        if(rna[i]=='A')
            rna[i] = 'U';
        else if(rna[i]=='U')
           rna[i] = 'A';
        else if(rna[i]=='G')
           rna[i] = 'C';
        else if(rna[i]=='C')
           rna[i] = 'G';
    }
    printf(rna);
}
