#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[]) {
     //checking  of correct  key
    if (argc != 2)  {                
        printf("Invalid key\n"); 
        return 1;
    } else {
        for (int i = 0, n = strlen(argv[1]); i < n; i++) {
            if (!isalpha(argv[1][i])) {
                printf("key must be letters");
                return 1;
            }    
        }
    }
    //get a key
    string key = argv[1];
    //get a plain text           
    string pText = GetString();
    //length of key        
    int keyLen = strlen(key); 
    //iteration text          
    for (int i = 0, j = 0, textLen = strlen(pText); i < n; i++) {            
        //key for letter
        int letterKey = tolower(key[j % klen]) - 'a';

        // cipher upper letters
        if (isupper(text[i])) {
            text[i] = ((text[i] -'A' +letterKey) % 26) + 'A';
            printf("%c", text[i]);
            j++;
        }
        //cipher lower letters
        else if (islower(text[i])) {
            text[i] = ((text[i] -'a' +letterKey) % 26) + 'a';
            printf("%c", text[i]);
            j++;
        }
        else
        {
            //print other chars 
            printf("%c", text[i]);
        }
    }

    printf("\n");

    return 0;
}