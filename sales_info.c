// Generates Sales information based on region, rep, item or year
#include <stdafx.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date
{
    int day, month, year;
};

struct record
{
    struct date orderDate;
    char region[20];
    char rep[20];
    char item[20];
    int units;
    float unitCost;
    float totalCost;
};

int nrecords = 0;
struct record records[501];
int readFile(char *fileName);
void findByRegion(char *region);
void findByRep(char *rep);
void findByItem(char *item);
void findByYear(int year);
record getData(char *);
int getOption();

void main()
{
    char string[20];
    char fileName[] = "C:\\16439232\lab 17\SampleData.txt";
    int i = 0;
    int option, year;
    char temp[20];

    if (!readFile(fileName))
    {
        printf("File could not be opened !!\n");
        return;
    }
    option = getOption();

    while (option != 0)
    {
        switch (option)
        {
        case 1:
            puts("Enter Region");
            gets_s(temp);
            findByRegion(temp);
            break;
        case 2:
            puts("Enter Rep");
            gets_s(temp);
            findByRep(temp);
            break;
        case 3:
            puts("Enter Item");
            gets_s(temp);
            findByItem(temp);
            break;
        case 4:
            puts("Enter Year");
            gets_s(temp);
            year = atoi(temp);
            findByYear(year);
            break;
        }
        option = getOption();
    }
}

int readFile(char *fileName)
{
    record temp;

    FILE *fptr;
    char line[300];
    int i;

    fptr = fopen("F:\\16439232\lab 17\SampleData.txt", "r");

    if (fptr == NULL)
    {
        printf("File could not be opened !!\n");
        return 0;
    }
    else
    {
        for (i = 0; i < 2; i++)
            fgets(line, 300, fptr);

        while (!feof(fptr))
        {
            fgets(line, 300, fptr);
            temp = getData(line);
            records[nrecords] = temp;
            nrecords++;
        }

        fclose(fptr);
        return 1;
    }

    return 1;
}

record getData(char *ptr)
{
    record temp;
    char *token;
    char delim[] = "\t";
    int i = 0;

    for (i = 0; i < nrecords; i++)
    {
        //date
        token = strtok(ptr, delim);
        strcpy(temp.orderDate, token);

        // region
        token = strtok(NULL, delim);
        temp.region[i] = atoi(token);

        // rep
        token = strtok(NULL, delim);
        temp.rep[i] = atoi(token);

        // item
        token = strtok(NULL, delim);
        temp.item[i] = atoi(token);

        //units
        token = strtok(NULL, delim);
        temp.units[i] = atoi(token);

        // unit cost
        token = strtok(NULL, delim);
        temp.unitCost[i] = atoi(token);

        //total
        token = strtok(NULL, delim);
        temp.totalCost[i] = atoi(token);
    }

    return temp;
}

void findByRegion(char *region)
{
    int i = 0;
    float total = 0.0;

    for (i = 0; i < nrecords; i++)
    {
        if (!strcmp(records[i].region, region))
        {
            total = total + records[i].totalCost;
        }
    }
    printf("Sales for region: %s = %.2f\n", region, total);
}

void findByRep(char *rep)
{
    int i = 0;
    float total = 0.0;

    for (i < 0; i < nrecords; i++)
    {
        if (!strcmp(records[i].rep, rep))
        {
            total = total + records[i].totalCost;
        }
    }
    printf("Sales by rep: %s = %.2f\n", rep, total);
}

void findByItem(char *item)
{
    int i = 0;
    float total = 0.0;

    for (i = 0; i < nrecords; i++)
    {
        if (!strcmp(records[i].item, item))
        {
            total = total + records[i].totalCost;
        }
    }
    printf("Sales of Item: %s = %.2f", item, total);
}

void findByYear(int year)
{
    int i = 0;
    float total = 0.0;

    for (i - 0; i < nrecords; i++)
    {
        if (!strcmp(records[i].orderDate.year, year))
        {
            total = total + records[i].totalCost;
        }
    }
    printf("Sales during year: %d = %.2f", year, total);
}

int getOption()
{
    int option = 0;
    char inp[3];

    puts("Enter one of the follow options:");
    puts("1 - sales by region");
    puts("2 - sales by rep");
    puts("3 - sales by item");
    puts("4 - sales by year");
    puts("0 - quit");
    gets_s(inp);
    option = atoi(inp);

    return option;
}