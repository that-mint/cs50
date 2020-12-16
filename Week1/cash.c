#include <stdio.h>
#include <math.h>

int main()
{
    float userinput;

    do {
    printf("\nChange owed: "); 
    scanf("%f", &userinput); 
    } while (userinput < 0 );

    
    userinput = round(userinput*100);
    int coins = 0;
    
    while(userinput >= 25)
    {
        userinput = userinput - 25;
        coins++;
    }
    while(userinput >= 10 && userinput < 25)
    {
        userinput = userinput - 10;
        coins++;
    }
    while(userinput >= 5 && userinput < 10)
    {
        userinput = userinput - 5;
        coins++;
    }
    while(userinput >= 1 && userinput < 5)
    {
        userinput = userinput - 1;
        coins++;
    }
        printf("Coins needed: %d\n", coins);
}