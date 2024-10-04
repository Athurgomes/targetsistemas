#include <bits/stdc++.h>

bool fib(int num){
    int x=0, y=1;
    if(num==x || num==y)
        return true;
    while(y<num){//enquanto for menor ou igual ao num procurado
        int aux=y;
        y=x+y;
        x=aux;
    }
    return y==num;//se for igual retorna 1 se for falso retorna 0
}

int main(){
    int num;
    //printf("Qual numero quer procurar: ");
    //scanf("%d", &num);
    //num=1597;
    num=88;

    if(fib(num))
        printf("Pertence!");
    else
        printf("Nao pertence!");
    return 0;
}
