//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int stringCount(string text){
    int cont=0;
    for(int i=0; i<text.size(); i++){
        if(text[i]=='a' || text[i]=='A')
            cont++;
    }
    return cont;
}

int main(){
    string text;
    //printf("Digite a plavra ou texto: ");
    //getline(cin, text);
    text="Alo, Testa, Olha, LA";
    int result=stringCount(text);
    printf("Total de letras a/A: %d", result);
}
