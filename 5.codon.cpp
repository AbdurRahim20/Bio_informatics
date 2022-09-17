#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
string find_amino_acid(string codon){

    if(codon=="UUC" || codon=="UUU")
        return "Phe";
    else if(codon=="UUA" || codon=="UUG")
        return "Leu";
    else
            return "";

}


int main(){

    string rna,codon;
    cin >> rna;
    int len = rna.length();
    int i;
    for(i=0;i<len;i+=3)
    {
        codon = rna.substr(i,3);
        cout << codon << " "<< find_amino_acid(codon)<<"\n";
    }

}

