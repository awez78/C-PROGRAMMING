#include <stdio.h>

int main() {
     /*
    SHAIKH AWEZ SALLWUDIN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UIN:- 251P050
    */
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}