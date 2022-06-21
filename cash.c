#include <stdio.h>
#include <cs50.h>
#include <math.h>

void moedas(float n)
{
    // 25, 10, 5, 1
    int cent = round(n*100);
    int count = 0;
    
    if (cent >= 25){
        count = cent/25;
        cent = cent%25; 
    }
    
    if(cent >= 10){
        count = count + (cent/10);
        cent = cent%10;
    }
    
    if(cent >= 5){
        count = count + (cent/5);
        cent = cent%5;
    }
    
    if(cent >= 1){
        count = count + cent;
    }
    printf("%i", count);
}

int main(void)
{
    float din = 0;
    
    do{
        din = get_float("Valor: ");
    }while(din < 0.001);
    
    moedas(din);
}

