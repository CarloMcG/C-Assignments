// Calcualte the Area of a given shape

#include <stdafx>
#include <stdio.h>

void main()
{
    int i = 1;
    int shape = 0;
    double area = 0;
    double TriBase = 0;
    double TriHeight = 0;
    double RectWidth = 0;
    double RectHeight = 0;
    double TrapA = 0;
    double TrapB = 0;
    double TrapHeight = 0;
    double EllipseA = 0;
    double EllipseB = 0;
    double SquareLength = 0;
    double ParaBase = 0;
    double ParaHeight = 0;
    double CircRad = 0;
    double SectRad = 0;
    double SectAngle = 0;
    const double pi = 3.14159;

    while (i = 1)
    {
        printf("Area Calculator \nEnter Choice: \n1 Triangle \n2Square \n3 Rectangle \n4 Parallelogram \n5 Trapezoid \nCircle \n7 Ellipse \n8 Sector \n");

        printf("Choice: ");
        scanf_s("%d", &shape);

        switch (shape)
        {
        case (1):
            printf("Enter Length of base: ");
            scanf_s("%1f", &TriBase);
            printf("Enter Height: ");
            scanf_s("%1f", &TriHeight);
            (double)area = 0.5 * (double)TriBase * (double)TriHeight;
            printf("Area = %f\n\n\n", area);
            break;

        case (2):
            printf("Enter Length: ");
            scanf_s("%lf", &SquareLength);
            (double)area = (double)SquareLength * (double)SquareLength;
            printf("Area = %f\n\n\n", area);
            break;

        case (3):
            printf("Enter Height: ");
            scanf_s("%lf", &RectHeight);
            printf("Enter Width: ");
            scanf_s("%lf", &RectWidth);
            (double)area = (double)RectHeight * (double)RectWidth;
            printf("Area = %f \n\n\n", area);
            break;

        case (4):
            printf("Enter length of base: ");
            scanf_s("%lf", &ParaBase);
            printf("Enter Height: ");
            scanf_s("%lf", &ParaHeight);
            (double)area = (double)ParaBase * (double)ParaHeight;
            printf("Area = %f\n\n\n", area);
            break;

        case (5):
            printf("Enter length of side A: ");
            scanf_s("%lf", &TrapA);
            printf("Enter length of side B: ");
            scanf_s("%lf", &TrapB);
            printf("Enter Height: ");
            scanf_s("%lf", &TrapHeight);
            (double)area = 0.5 * ((double)TrapA + (double)TrapB) * (double)TrapHeight;
            printf("Area = %f\n\n\n", area);
            break;

        case (6):
            printf("Enter Radius: ");
            scanf_s("%lf", &CircRad);
            (double)area = (double)pi * (double)CircRad;
            printf("Area = %f\n\n\n", area);
            break;

        case (7):
            printf("Enter length A: ");
            scanf_s("%lf", &EllipseA);
            printf("Enter length B: ");
            scanf_s("%lf", &EllipseB);
            (double)area = (double)pi * (double)EllipseA * (double)EllipseB;
            printf("Area = %f\n\n\n", area);
            break;

        case (8):
            printf("Enter radius: ");
            scanf_s("%lf", &SectRad);
            printf("Enter Angle: ");
            scanf_s("%lf", &SectAngle);
            (double)area = 0.5 * (double)SectAngle * ((double)SectRad * (double)SectRad);
            printf("Area = %f\n\n\n", area);
            break;
        }
    }
}