#include<stdio.h>
#include<string.h>

char LS[] = "GAGCCTACTAACGGGAT";
char RS[] = "AATCGTAATGACGGCCT";
int dH(int len){
    int i=0,c=0;
    for(i=0;i<len;i++){
        if(RS[i] != LS[i])
            c++;
}
        return c;
}
int main(){


    int len = strlen(LS);
    printf("dH:");
    printf("%d",dH(len));
    return 0;

}
