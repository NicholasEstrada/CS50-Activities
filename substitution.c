#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    
    if (argc != 2 ){
        printf("Uso: ./ chave de substituição\n");   
        return 1;
    }
    
    if(strlen(argv[1]) != 26){
        printf("A chave deve conter 26 caracteres.\n");   
        return 1;
    }
    
    int nom;
    
    for (int j = 0 ; j < 26 ; j++ ){
        int aux = 0;
        nom = isdigit(argv[1][j]);
            if (nom != 0){
                printf("Use apenas letras na chave\n");   
                return 1;
                break; 
            }
        
        for (int k = 0 ; k < 26 ; k++){
            
            if(argv[1][j] == argv[1][k]){
                aux++; 
                if (aux > 1){
                    printf("Letra repetida na chave\n");   
                    return 1;
                    break;   
                }
            }
        }
    }
    
    string text = get_string("Plaintext: ");
    char toU;
    char toL;
    int posicao;
    
    printf("ciphertext: ");
    
    for ( int i = 0, n = strlen(text) ; i < n ; i++ ){
        if (text[i] >= 'A' && text[i] <= 'Z'){ // 65 - 90
            posicao = text[i];
            
            toU = toupper(argv[1][posicao - 65]);
            
            printf("%c", toU);
            
        }else if (text[i] >= 'a' && text[i] <= 'z'){ // 97 - 122
            posicao = text[i];
            
            toL = tolower(argv[1][posicao - 97]);
            
            printf("%c", toL);
            
        }else{
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0; 
}

