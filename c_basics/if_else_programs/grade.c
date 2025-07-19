#include <stdio.h>
int main()
{
    float Physics, Chemistry, Biology, Math, CS, Percentage;
    printf("\nEnter your marks => ");
    scanf("%f%f%f%f%f", &Physics, &Chemistry, &Biology, &Math, &CS);
    Percentage = ((Physics + Chemistry + Biology + Math + CS) * 100) / 500;

    if (Percentage >= 90)
    {
        printf("Grade A\n");
    }
    else if (Percentage >= 80)
    {
        printf("Grade B\n");
    }
    else if (Percentage >= 70)
    {
        printf("Grade C\n");
    }
    else if (Percentage >= 60)
    {
        printf("Grade D\n");
    }
    else if (Percentage >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Failed\n");
    }

        return 0;
    }