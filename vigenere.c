#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[]) {

    if (argc != 2)  {                 //checking  of correct  key
        printf("Invalid key\n"); 
        return 1;
    } else {
        for (int i = 0, n = strlen(argv[1]); i < n; i++) {
            if (!isalpha(argv[1][i])) {
                printf("key must be letters.");

                return 1;
            }    
        }
    }
    
    string key = argv[1];             //take a key
    
    printf("plaintext:  ");
    
    string text = GetString();        //take a text
    
    printf("ciphertext: ");
    
    int klen = strlen(key);           //length of key
    for (int i = 0, j = 0, n = strlen(text); i < n; i++) {            
        
        int letterKey = tolower(key[j % klen]) - 'a';

        
        if (isupper(text[i])) {
            text[i] = ((text[i] -'A' +letterKey) % 26) + 'A';
            printf("%c", text[i]);
            j++;
        }
        else if (islower(text[i])) {
            text[i] = ((text[i] -'a' +letterKey) % 26) + 'a';
            printf("%c", text[i]);
            j++;
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    printf("\n");

    return 0;
}
