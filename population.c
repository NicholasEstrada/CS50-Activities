#include <cs50.h>
#include <stdio.h>

int main (void){
    int atual;
    int futuro;
    int cont = 0;
    
    int aux = 0;
    
    do{
        atual = get_int("Quantidade atual: ");
    }while(atual <= 8);
    
    do{
        futuro = get_int("Quantidade esperada: ");
    }while(futuro < atual);
    
    
    while(atual < futuro){
        aux = atual/3;
        atual = atual + (aux - (atual/4));
        
        cont += 1;
        aux = 0;
    }
    
    printf("Years: %i", cont);
    
}