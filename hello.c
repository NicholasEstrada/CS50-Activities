#include <stdio.h>
#include <cs50.h> // biblioteca do CS50 -get_string

int main(void)
{
    printf("hello, world!\n");
    string nome = get_string("Qual seu nome? ");
    printf("Olá %s", nome);
}