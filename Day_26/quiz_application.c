#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf("=== QUIZ APPLICATION ===\n");
    // QUESTION 1
    printf("Q1: Which programming language is used in this program?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Correct answer!\n");
        score++;
    }
    else
    {
        printf("Wrong answer!\n");
    }
    // QUESTION 2
    printf("Q2. How many days are there in a week?\n");
    printf("1. 5\n2. 9\n3. 7\n4. 3\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("Correct answer!\n");
        score++;
    }
    else
    {
        printf("Wrong answer!\n");
    }
    // QUESTION 3
    printf("Q3. Who is known as Chanakya of India?\n");
    printf("1.Amit Shah\n2. Narendra Modi\n3. Ajit Doval\n4. Yogi Adityanath\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("Correct answer!\n");
        score++;
    }
    else
    {
        printf("Wrong answer!\n");
    }
    printf("=== RESULT ===\n");
    printf(" Your Score = %d/3", score);
    return 0;
}