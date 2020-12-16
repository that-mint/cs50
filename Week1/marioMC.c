#include <stdio.h>

int main(void)
{
    int he; //height

    do {
    printf("Enter a height: ");
    scanf("%d", &he); //using scanf as i prefer my own ide
    } while (he < 0 || he > 8);
    
    //int he = 8; // static height of the pyramid for testing

    for (int r = 0; r < he; r++)
    {
    
        int ha = r + 1; 
        int s = he - r; //blank space = height - row

        for (int i = 0; i < s; i++) // for each row, take the spaces (height - row) and print
        {
            printf(" ");
        }

        for (int i = 0; i < ha; i++) // for each row, take the hashes (row + 1) and print
        {
            printf("#");
        }

        //for more comfortable, use a cheaty way to add the second side, as the spaces are aready configgured, as well as the hashes per line
        
        printf("  ");

        for (int i = 0; i < ha; i++) // copy the same code from before
        {
            printf("#");
        }
        
        printf("\n"); //print newline after each row so it actually makes a pyramid
        
    }

}
