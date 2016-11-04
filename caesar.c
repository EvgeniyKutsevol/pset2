
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[]) {

    if (argc != 2)  {                 //checking  of correct  key
        printf("print the positive number of key\n"); 
        return 1;
    } else {
        
        
        int key = atoi(argv[1]);          //string to int 
        
        printf("plaintext:  ");
        
        string text = GetString();        //take a text
    
        printf("ciphertext: ");
    
        for (int i = 0; i < strlen(text); i++) {   
            
            if (isalpha(text[i])) {
                if (isupper(text[i])) {
                    text[i] = (text[i] + key - 'A') % 26 + 'A'; // print cipher text for upper charackers
                    printf("%c", text[i]);
                } else {
                    text[i] = (text[i] + key - 'a') % 26 + 'a';  // print cipher text for lower charackers
                    printf("%c", text[i]);
                }
             
            } else {
                
                printf("%c", text[i]);
                
            }
        }   
    
        printf("\n");
        return 0;

    }    
}
