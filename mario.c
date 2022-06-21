#include <stdio.h>
#include <cs50.h>

void mario_muros(int n)
{
    char ash = '#';
    char esp = ' ';
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j==0)
            {
                for (int k = (n - i) - 1 ; k > j ; k--)
                {
                    printf("%c", esp);
                }
            }
            printf("%c", ash);
        }
        
        printf("%c", esp);
        printf("%c", esp);
        
        for (int l = 0; l <= i ; l++){
            printf("%c", ash);
        }
        
        printf("\n");
    }
}

int main(void)
{
    int tamanho;
    
    do
    {
        tamanho = get_int("Tamanho: ");
    }
    while (tamanho < 1 || tamanho > 8);
    
    mario_muros(tamanho);
}