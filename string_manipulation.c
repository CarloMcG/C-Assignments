// This provides an example of manipulating Strings in C
#include <stdafx.h>
#include <stdio.h>

int main()
{
    char string1[] = "8o25BtnTHUvv2COCkbFW";
    char string2[] = "uo4htaJaecq0obQq4AQG";
    char string3[] = "JJt4FKCI1yJf03EeENVi";
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    printf("BEFORE:\n");
    printf("String 1: %s \n", string1);
    printf("String 2: %s \n", string2);
    printf("String 3: %s \n", string3);

    //Converting String1
    while (i < 20)
    {
        if (string1[i] >= 48 && string1[i] <= 57)
        {
            string1[i] = 32;
            count1 = count1 + 1;
            ;
        }
        i = i + 1;
        ;
    }

    //Converting String2

    while (j < 20)
    {
        if (string2[j] >= 65 && string2[j] <= 90)
        {
            string2[j] = (string2[j] + 32);
            count2 = count2 + 1;
        }
        j = j + 1;
    }

    //Converting String 3
    while (k < 20)
    {
        if (string3[k] >= 97 && string3[j] <= 122)
        {
            string3[k] = (string3[k] - 32);
            count3 = count3 + 1;
        }
        k = k + 1;
    }

    printf("AFTER:");
    //String 1
    printf("\n\n\nString 1: %s \t", string1);
    printf("<%d Digits Replaced>\n", count1);
    //String 2
    printf("String 2: %s \t", string2);
    printf("<%d Charecters converted> \n", count2);
    //String 3
    printf("String 3: %s \t", string3);
    printf("<%d Charecters converted> \n", count3);
}