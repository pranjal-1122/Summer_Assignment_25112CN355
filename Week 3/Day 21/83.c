#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++){
        char ch = str[i];
        // Convert uppercase to lowercase
        if (ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
        }
        if (ch >= 'a' && ch <= 'z'){
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
