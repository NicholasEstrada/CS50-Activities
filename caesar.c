#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    
    if (argc != 2 ){
        printf("Usage: ./caesar key\n");   
        return 1;
    }
    
    if (argc == 2){
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            int nom = isdigit(argv[1][i]);
            if (nom == 0){
                printf("Usage: ./caesar key\n");   
                return 1;
                break; 
            }
        }
    }
    
    int key = atoi(argv[1]);
    
    string text = get_string("plaintext: ");
    
    char ci[strlen(text)];
    
    printf("ciphertext: ");
    for (int i = 0 ; i < strlen(text) ; i++){
        
        if (text[i] >= 65 && text[i] <= 91){
            if ( text[i] + (key % 26) > 90){
                ci[i] = text[i] + (key % 26) - 26;
                printf("%c", ci[i]);
            }else{
                ci[i] = text[i] + (key % 26);
                printf("%c", ci[i]);
            }
        }
        else if (text[i] >= 97 && text[i] <= 122){
            if (text[i] + (key % 26) > 122)
            {
                ci[i] = text[i] + (key % 26) - 26;
                printf("%c", ci[i]);
            }
            else
            {
                ci[i] = text[i] + (key % 26);
                printf("%c", ci[i]);
            }
        } else {
            printf("%c", text[i]);    
        }
    }
    
    printf("\n");
    return 0;
    
}