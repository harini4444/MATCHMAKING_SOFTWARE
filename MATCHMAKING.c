#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t = 2, a[10], b[10]; // array for storing user input for each q
    char par1[3], par2[3];   // array for storing parent question inputs

    printf("Please enter all values in small letters\n");

    while (t--) // test case for getting inputs from 2 partners
    {
        char c[10];
    A:
    {
        char x; // temporary variable to store parent input for use in switch case
        printf("Are you an Animal lover?(y/n): ");
        scanf(" %c", &x);

        if (t == 1)
            par1[0] = x; // storing temp parent var in global array according to test case
        else if (t == 0)
            par2[0] = x;

        switch (x)
        {
        case 'y':
        { // follow up qn

            printf("Which animal you would like to have as a pet?\n a)Cat\n b)Dog\n c)Rabit: ");
            scanf(" %c", &c[0]);
            break;
        }
        case 'n':
        {
            c[0] = 'n';

            break;
        }
        default:
        {
            printf("\nyou entered wrong value\n "); // error display if user inputs invalid ans
            goto A;                                 // to repeat asking qn from user until valid input is given
        }
        }
        printf("\n");
    }
        // checking inputs validation
        if (c[0] == 'a' || c[0] == 'b' || c[0] == 'c' || c[0] == 'n')
        {

            goto B; // valid input==> goto next question
        }
        else
        {
            printf("\nyou entered wrong values\n");
            goto A;
        }

    // 2nd qn
    B:
    {
        printf("What do you value most in a relationship?\n a)Respect\n b)Compassion \nc)Patience\nd)Openness\ne)Empathy: ");
        scanf(" %c", &c[1]);
        printf("\n");
    }
        if (c[1] == 'a' || c[1] == 'b' || c[1] == 'c' || c[1] == 'd' || c[1] == 'e')
        {
            goto C;
        }
        else
        {
            printf("you entered the wrong value\n");
            goto B;
        }

    // 3 qn
    C:
    {
        char y;
        printf("Do you like watching movies?(y/n): ");
        scanf(" %c", &y);

        if (t == 1)
            par1[1] = y;
        else if (t == 0)
            par2[1] = y;

        switch (y)
        {
        case 'y':
        { // follow up qn
            printf("What's you fav genre of movie?\na)Comedy\nb)Horror\nc)Action\nd)Drama\ne)Thriller\n");
            scanf(" %c", &c[2]);
            break;
        }
        case 'n':
        { // follow up qn
            printf("How do you like spending your chill time instead?\na)Playgames\nb)Sports\nc)Hangout with others\nd)Read books: ");
            scanf(" %c", &c[2]);
            break;
        }
        default:
        {
            printf("you entered the wrong value\n");
            goto C;
            break;
        }
        }
        printf("\n");
    }
        if (c[2] == 'a' || c[2] == 'b' || c[2] == 'c' || c[2] == 'd' || c[2] == 'e' || c[2] == 'n')
        {
            goto D;
        }
        else
        {
            printf("you entered wrong values\n");
            goto C;
        }

    // 4 qn
    D:
    {
        printf("One quality your dream partner should possess?\na)Loyal\nb)Goodlooking\nc)Humour\nd)Highly educated\n");
        scanf(" %c", &c[3]);
        printf("\n");
    }
        if (c[3] == 'a' || c[3] == 'b' || c[3] == 'c' || c[3] == 'd')
        {
            goto E;
        }
        else
        {
            printf("you entered wrong values\n");
            goto D;
        }

    // 5 qn
    E:
    {
        printf("What is one trait that you value the most?\na)Respect for others\nb)Integrity\nc)Responsibility\nd)Self discipline\n");
        scanf(" %c", &c[4]);
        printf("\n");
    }
        if (c[4] == 'a' || c[4] == 'b' || c[4] == 'c' || c[4] == 'd')
        {
            goto F;
        }
        else
        {
            printf("you entered wrong values\n");
            goto E;
        }

    // 6 qn
    F:
    {
        printf("Does looks matter?(y/n): ");
        scanf(" %c", &c[5]);
        printf("\n");
    }
        if (c[5] == 'y' || c[5] == 'n')
        {
            goto G;
        }
        else
        {
            printf("you entered wrong values\n");
            goto F;
        }

    // 7 qn
    G:
    {
        printf("Are you an intovert or an extrovert?(i/e): ");
        scanf(" %c", &c[6]);
        printf("\n");
    }
        if (c[6] == 'i' || c[6] == 'e')
        {
            goto H;
        }
        else
        {
            printf("you entered wrong value\n");
            goto G;
        }

    // 8 qn
    H:
    {
        printf("Rate yourself on a scale of 5 on how organised you are : ");
        scanf(" %c", &c[7]);
        printf("\n");
    }
        // constraint [0-5]
        if (c[7] == '0' || c[7] == '1' || c[7] == '2' || c[7] == '3' || c[7] == '4' || c[7] == '5')
        {
            goto I;
        }
        else
        {
            printf("you entered the wrong values\n");
            goto H;
        }
    // 9 qn
    I:
    {
        char z;
        printf("After graduation would you like job or rather have your own startup?\na)Take a job\nb)Own startup\n");
        scanf(" %c", &z);

        if (t == 1)
            par1[2] = z;
        else if (t == 0)
            par2[2] = z;

        switch (z)
        {
        case 'a':
        { // follow up qn
            printf("Do you encourage your partner if he/she wants to work on a startup instead?(y/n): ");
            scanf(" %c", &c[8]);
            break;
        }
        case 'b':
        { // follow up qn
            printf("Do you encourage your partner if he/she wants to work on a full time job instead?(y/n): ");
            scanf(" %c", &c[8]);
            break;
        }
        default:
        {
            printf("you entered the wrong values\n");
            goto I;
            break;
        }
        }
        printf("\n");
    }
        if (c[8] == 'y' || c[8] == 'n')
        {
            goto J;
        }
        else
        {
            printf("you entered wrong value");
            goto I;
        }
    // 10 qn
    J:
    {
        printf("What do you prioritize more?\na)Success\nb)Love: ");
        scanf(" %c", &c[9]);
        printf("\n");
    }
        if (c[9] == 'a' || c[9] == 'b')
        {
            if (t == 1)
            {
                printf("Now your Partner Turn\n-----------------------------------------------------------------------------------------------------");
            }
        }
        else
        {
            goto J;
        }

        // storing the local variales inputs got through test case into global variable arrays a[] and b[]

        // array a[] stores the input values of partner 1
        if (t == 1)
        {
            for (int i = 0; i < 10; i++)
            {
                a[i] = c[i];
            }
            printf("\n");
        }
        // array b[] stores the input values of partner 2
        if (t == 0)
        {
            for (int i = 0; i < 10; i++)
            {
                b[i] = c[i];
            }
            printf("\n");
        }
    }

    // score calculations-->

    // score for Q1
    int score = 0;
    if (par1[0] == par2[0])
    {
        score += 5; // parent ans match
        if (a[0] == b[0])
        {
            score += 5; // follow up question match
        }
    }
    // score for Q3
    if (par1[1] == par2[1])
    {
        score += 5;
        if (a[2] == b[2])
        {
            score += 5;
        }
    }
    // score for Q8
    score += (10 - (abs(a[7] - b[7]) * 2));

    // score for Q9
    if (par1[2] == par2[2])
    {
        score += 5;
        if (a[8] == b[8])
        {
            score += 5;
        }
    }

    // score calculation for rest of the questions
    int loop[] = {1, 3, 4, 5, 6, 9};
    for (int i = 0; i < 6; i++)
    {
        if (a[loop[i]] == b[loop[i]])
        {
            score += 10;
        }
    }

    // score print
    printf("%d percent Matched \n", score);

    //comment print
    if (score >= 0 && score <= 40)
        printf("Not a Good Match ");
    else if (score >= 41 && score <= 60)
        printf("Decent Match");
    else if (score >= 61 && score <= 80)
        printf("Good Match");
    else if (score >= 81 && score <= 100)
        printf(" You both are made for each other ");

    return 0;
}