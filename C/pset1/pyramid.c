#include <stdio.h>
#include <cs50.h>

int main (void)

{
    // Prompt user for height using cs50 get_int function
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 1 || height > 8);
    // Building the pyramid
    // Starting at 1, create the number of rows until the height is reached
    for (int row = 1; row <= height; row++)
    {
    // For loop to create space before each #
    // Amount of Space to Create = Total Height - Number of Row we're on
    /*
    Example:
    ..# <- row 1, 2 spaces, 1 hash; spaces = height (3) - row # (1)
    .## <- row 2, 1 space, 2 hash; space = height (3) - row # (2)
    ### <- row 3, 0 space, 3 hash; space = height (3) - row # (3)
    */
        for (int k = 1; k <= height - row; k++)
        {
            printf(".");
        }
    // Print the # (which == the row #)
    // For row 1, we have 1 hash; row 2, 2 hashes; row 3, 3 hashes
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }
    // Add a line after each loop iteration
        printf("\n");
    }

}
