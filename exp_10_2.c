#include <stdio.h>

int main() {
    /*
    SHAIKH AWEZ SALLWUDIN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UIN:- 251P050
    */
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    int *p = a + n - 1;

    printf("Reverse: ");
    for(int i=0;i<n;i++)
        printf("%d ", *(p - i));

    return 0;
}
