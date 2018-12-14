#include<stdio.h>
#include<string.h>
int main() {
     char input[50];
     int i;
     printf("Enter paragraph: ");
     gets(input);
     printf("%c", toupper(input[0]));
     for(i = 1; i<strlen(input); i++){
        if(input[i] == ' '){
            printf("%c",input[i]);
            printf("%c", toupper(input[i+1])); 
            i++;
              } 
        else {
            printf("%c", input[i]);
        }
     }
return 0;
} 
