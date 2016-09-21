#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void) {
    
   string name = GetString();                //type a name
   printf("%c", toupper(name[0]));           //print first letter
   
   for (int i = 0; i <= strlen(name); i++) {
      if (name[i] == ' ') {                  //check for spaces
         printf("%c", toupper(name[i+1]));   //print other letters
         i++;
      }
      
   }
  
   printf("\n"); 
    
}