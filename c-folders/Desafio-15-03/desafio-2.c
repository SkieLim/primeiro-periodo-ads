#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

    int x, y, a, b, c, d, e, dia, ano;

    printf("Digite o ano que deseja saber o dia da pascoa:\n");
        scanf("%d", &ano);

    
    
    //Variaveis de acordo com a Margem de Ano:

    if (ano >= 1582 && ano <= 1599){

        x = 22;
        y = 2;

    }else if (ano >= 1600 && ano <= 1699){

        x = 22;
        y = 2;

    }else if (ano >= 1700 && ano <= 1799){

        x = 23;
        y = 3;
        
    }else if (ano >= 1800 && ano <= 1899){

        x = 24;
        y = 4;
        
    }else if (ano >= 1900 && ano <= 1999){

        x = 24;
        y = 5;
        
    }else if (ano >= 2000 && ano <= 2099){

        x = 24;
        y = 5;
        
    }else if (ano >= 2100 && ano <= 2199){

        x = 24;
        y = 6;
        
    }else if (ano >= 2200 && ano <= 2299){

        x = 25;
        y = 7;
        
    }

    //Calculos necessarios
    
    a = ano % 19;
    b = ano % 4;
    c = ano % 7;
    d = (19 * a + x) % 30;
    e = (2 * b + 4 * c + 6 * d + y) % 7;

     if ((d + e - 9 == 26) && ((d + e) > 9)){

        dia = 19;
        printf("pascoa: %d de Abril de %d\n", dia, ano);

    }else if ((d + e - 9 == 25 && ((d + e) > 9)) || (d == 28 && a > 10)){

        dia = 18;
        printf("pascoa: %d de Abril de %d\n", dia, ano);

    }else{

        if ((d + e) > 9){

            dia = d + e - 9;
            printf("pascoa: %d de Abril de %d\n", dia, ano);

        }else{

            dia = d + e + 22;
            printf("pascoa: %d de Março de %d\n", dia, ano);

        }

    }
    return 0;

}