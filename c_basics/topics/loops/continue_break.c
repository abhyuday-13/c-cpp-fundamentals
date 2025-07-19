// continue = skips the current iteration of the loop and forces the next iteration.
// break = exits a loop/switch

/*CONTINUE STATEMENT EXAMPLE ->
#include<stdio.h>
int main()
{
    // for loop to print 1 to 8
    for (int i = 1; i <= 8; i++) {
        // when i = 4, the iteration will be skipped and for
        // will not be printed
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
return 0;
}*/


/*BREAK STATEMENT EXAMPLE ->
#include<stdio.h>
int main()
{
 printf("\nbreak in while loop\n");
    int i = 1;
    while (i < 20) {
        if (i == 3)
            break;
        else
            printf("%d ", i);
        i++;
    }
    return 0;
}
*/
