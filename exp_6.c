#include <stdio.h>

void counter() {
    /*
    SHAIKH AWEZ SALLWUDIN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UIN:- 251P050
    */
    static int c = 0;   // static retains value
    c++;
    printf("Function called %d times\n", c);
}

int main() {
    for(int i=0; i<5; i++)
        counter();
    return 0;
}
