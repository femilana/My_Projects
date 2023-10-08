#include <stdio.h>

/**
 * main - Entry point 
 * Description: A school grading program
 * 75 - 100 == A
 * 65 - 74 == B
 * 50 - 64 == C
 * 40 - 49 == D
 * 35 - 39 == E
 * < 35 == F
 */

int main()
{
    int score;
    char name[25];
    printf("what is your name\n");
    scanf("%24s", name);
    
    
    while(1)
    {
        printf("Enter your score: \n");
        if(scanf("%d", &score) == 1)
        {
            if(score >= 75 && score <= 100)
    {
        printf("%s, You have an A\n", name);
    }
    
    else if(score >=  65 && score <= 74)
    {
        printf("%s, You have a B\n", name);
    }
    else if(score >= 50 && score <= 64)
    {
        printf("%s, You have a C\n", name);
    }
    else if(score >= 40 && score <= 49)
    {
        printf("%s, You have a D\n", name);
    }
    else if(score >= 35 && score <= 39)
    {
        printf("%s, You have E\n", name);
    }
    else if(score <= 34)
    {
        printf("%s, You have an F\n", name);
    }
    
    break;
        }
    
    else 
    {
            printf("That's not an integer, try again\n");
            while (getchar() != '\n'); // Clear any remaining characters (including newline characters)
    }
        
    }
    
    return (0);
    
}
