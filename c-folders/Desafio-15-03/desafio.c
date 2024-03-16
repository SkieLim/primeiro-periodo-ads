#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int g, c, x, z, e, n, d, mes, ano, pascoa;

    printf("Digite o Ano:\n");
        scanf("%d", &ano);

//Calculo do Numero Aureo(G):

   g = (ano % 19) + 1;

//Calculo do Seculo(C):

   c = (ano / 100) + 1;

//Calculo de correções(X e Z):

    x = ((3 * c) / 4) - 12;

    z = ((8 * c + 5) / 25) - 5;

//Calculo do Epacta(E):

    e = (11 * g + 20 + z - x) % 30;

        //Condição Epacta:

    if (e == 25 && g > 11 || e == 24){

            e = e + 1;

    }

//Calculo da lua cheia:

    n = 44 - e;

    //Condição da Lua Cheia:

    if (n < 21){

            n == n + 30;

    }

//Calculo do Domingo:

    d = ((5 * ano) / 4) - (x + 10);

    n = (n + 7) - ((d + n) % 7);

//Calculo do Mês:

    if (n > 31){

        pascoa = n - 31;

        printf("pascoa: %d de abril de %d\n", pascoa, ano);

    }else{

        pascoa = n;
        printf("pascoa: %d de março de %d\n", pascoa, ano);

    }

    return 0;
}