#include <stdio.h>
#include<string.h>
#include <ctype.h> 

int main() {
    char input_str[100];
    printf("Ban hay nhap chuoi ky tu: ");
    fgets(input_str, sizeof(input_str), stdin); 
    int count_letters = 0;  
    int count_digits = 0;   
    int count_special = 0;  

    for (int i = 0; input_str[i] != '\0'; i++) {
        char check = input_str[i];
        if (isalpha(check)) { 
            count_letters++;
        } else if (isdigit(check)) { 
            count_digits++;
        } else if (!isspace(check)) { 
            count_special++;
        }
    }
    
    printf("So ky tu la chu cai: %d\n", count_letters);
    printf("So ky tu la chu so: %d\n", count_digits);
    printf("So ky tu dac biet: %d\n", count_special);

    return 0;
}
