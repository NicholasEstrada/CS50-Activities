#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    // 65 letras, 4 sentenças e 14 palavras
    // (0.0588 * ((letras/palavras)*100)) - (0.296 * ((sentenças/palavras)*100)) - 15.8
    
    string texto = get_string("Texto: ");
    
    float contP = 1;
    float contL = 0;
    float contS = 0;
    bool asp = false;
    
    for (int i = 0,  n = strlen(texto); i < n; i++) {
        
        if (toupper(texto[i]) >= 'A' && toupper(texto[i]) <= 'Z'){
            contL += 1;   
        }
        
        if (texto[i] == ' '){
            contP += 1;
        }
        
        if (texto[i] == '"'){
            asp = true;
        }
        
        if(asp == false){        
            if(texto[i] == '.' || texto[i] == '!' || texto[i] == ':' || texto[i] == '?'){
                contS += 1;
            }
        }else{
            if(texto[i] == '.' || texto[i] == '!' || texto[i] == ':'){
                contS += 1;
            }
        }
        
    }
    
    float num =  0.0588 * ((contL/contP)*100) - 0.296 * ((contS/contP)*100) - 15.8;
    int result = round(num);
    
    //printf("%f\n", num);
    //printf("%i\n", result);
    
    if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (result > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", result);
    }
    
    //printf("%f %f %f\n", contP, contL, contS);
    
    
}