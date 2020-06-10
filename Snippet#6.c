#include <stdio.h>

int main(void)
{

    int x, y, j; // -> O(1)

    for (x = 0; x < 10; x++) // -> O(1)
    {

        for (y = x; y < 10; y++) // -> O(1) n
        {                                               // n + n = n^2

            j++; // -> O(1) Adding 1 each time n
            printf("the count is %i\n", j); // -> O(1) is not dependant on size of input
        }
    }
}

        // T = O(1) + 2n^2xO(1)+O(1) + O(1)
        // c + 2n^2 x c_2 = O(n^2)
        // Quadratic Time Complexity


        // Fastest growing term
        // Remove coefficient
        

        // O(1) = Constant Time Complexity
        // O(n) = Linear Time Complexity
        // O(n^2) = Quadratic Time Complexity