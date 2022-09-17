#include <bits/stdc++.h>

using namespace std;

int main(){

    string ls,rs;
    printf("LS & RS here:");
    cin >> ls >> rs;

    int row,col;
    row = ls.length() + 1;
    col = rs.length() + 1;

    int data[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            data[i][j]=0;
            cout<<data[i][j]<<" ";
        }cout<<"\n";
    }


    int match = 1,mismatch=-1,gap=-2;
    int left_adj=0,up_adj=0,dia_adj=0;
    int i,j;
    for(i=1;i<row;i++){
        for(j=1;j<col;j++){
            left_adj = data[i-1][j]+gap;
            if(left_adj<0){
                left_adj = 0;
            }
            up_adj = data[i][j-1] + gap;
            if(up_adj<0){
                up_adj=0;
            }
            if(ls[i-1] == rs[j-1]){
                dia_adj = data[i-1][j-1] + match;
            }else{
                dia_adj = data[i-1][j-1] + mismatch;
            }
            data[i][j] = max(left_adj,up_adj);
            data[i][j] = max(data[i][j],dia_adj);

        }
    }
    printf("Smith:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"\n";
    }

}
