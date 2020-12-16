#include <stdio.h>

int main(void)
{
    int he; //height

    do {
    printf("Enter a height: ");
    scanf("%d", &he); //using scanf as i prefer my own ide
    } while (he < 0 || he > 8);
    
    //int he = 8; // static height of the pyramid for testing

    for (int r = 0; r < he; r++) //runs every bit of code her per row, until it reaches the number of the height, then stops
    {
    
        int ha = r + 2; //change to 2 if need 2 hashes per line etc.
        int s = he - r;

        for (int i = 0; i < s; i++) // for each row, take the spaces (height - row) and print
        {
            printf(" ");
        }

        for (int i = 0; i < ha; i++) // for each row, take the hashes (row + 1) and print
        {
            printf("#");
        }
        
        printf("\n"); //print newline after each row so it actually makes a pyramid
        
    }

}
