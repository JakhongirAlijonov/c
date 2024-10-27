#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // Question 1

    int math, chem, physics;
    printf("Enter score of mathematics:");
    scanf("%d", &math);
    printf("Enter score of chemistry:");
    scanf("%d", &chem);
    printf("Enter score of phsics:");
    scanf("%d", &physics);
    printf("Average score is: %d", (math + chem + physics) / 3);

    // Question 2
    int seconds, rest, minutes;
    printf("Enter seconds:");
    scanf("%d", &seconds);
    minutes = seconds / 60;
    rest = seconds % 60;
    printf("The  %d is %d minutes and  %d seconds ", seconds, minutes, rest);

    // Question 3

    float inches, centimeters;
    printf("Enter inches:");
    scanf("%f", &inches);
    centimeters = inches * 2.54;
    printf("%.2f inches are %.2f centimeters", inches, centimeters);

    // Question 4

    int change, fives, hundreds, tens;
    printf("Enter change:");
    scanf("%d", &change);
    fives = change / 500;
    hundreds = (change - (500 * fives)) / 100;
    tens = (change - (500 * fives + 100 * hundreds)) / 10;
    printf(" 500 coin: %d \n 100 coin: %d \n 10 coins: %d", fives, hundreds, tens);

    // Question 5
    float wins, losses;
    printf("Enter wins:");
    scanf("%f", &wins);
    printf("Enter losses:");
    scanf("%f", &losses);
    float aver = wins / (wins + losses);
    printf("Your odds of winning are: %.2f", aver);
    return 0;
}
