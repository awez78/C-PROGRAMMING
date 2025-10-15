#include<stdio.h>

int main()
{
    /*
    SHAIKH AWEZ SALLWUDIN
    CLASS:- COMPS F.Y. DIVISION:- C-3
    UNI:- 251P050
    */
    int p,c,m;
    float avg;
    printf("Enter the marks of Physic:");
    scanf("%d",&p);
    printf("Enter the marks of Chemistry:");
    scanf("%d",&p);
    printf("Enter the marks of Maths:");
    scanf("%d",&m);
    avg=(p+c+m)/3.00;
    printf("Physics=%d\nChemistry=%d\nMaths=%d\nAverage=%f\n",p,c,m,avg);
    avg>50?printf("YOU ARE ELIGIBLE FOR ADMISSION...%c",1):printf("YOU ARE NOT ELIGIBLE FOR ADMISSION");
    return 0;
}
