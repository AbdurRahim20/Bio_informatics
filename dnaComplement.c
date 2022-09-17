/*--------------DNA complementary-------------
Sample input-output:
AACCTAGCTC
TTGGATCGAG

A-T,T-A,G-C,C-G
*/

#include<stdio.h>
int main(){

    char dna[100];
    gets(dna);

    int len = strlen(dna);
    int i;

    for(i=0;i<len;i++){

        if(dna[i]=='A')
            dna[i] = 'T';
        else if(dna[i]=='T')
           dna[i] = 'A';
        else if(dna[i]=='G')
           dna[i] = 'C';
        else if(dna[i]=='C')
           dna[i] = 'G';
    }
    printf(dna);
}
