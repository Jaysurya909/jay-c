#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);

    if (age >= 18)
    {
        printf("you can vote!");
    }

    else if (age >= 10)
    {
        printf("You are under 18 so you cannot vote");
    }

    else if (age < 10)
    {
        printf("You are less than 10 so you can vote for anime only ");
    }

    return 0;
}
