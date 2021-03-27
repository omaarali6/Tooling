#include <stdio.h>
#include <stdlib.h>

struct student getDataa();

void printData(struct* student group[]);

struct student
{
    char name[50];
    int age;
    int degree;
    int section;
};


int main()
{
    struct student group[5];
    int i;
    for(i=0;i<2;i++)
    {
        group[i]=getDataa(i);
    }
    printData(group);
    return 0;
}

struct student getDataa(int n)
{
    struct student temp;
    printf("Enter Student %d Name: ",n+1);
    scanf(" %s",&temp.name);
    printf("Enter Student %d Age: ",n+1);
    scanf("%d",&temp.age);
    printf("Enter Student %d Degree: ",n+1);
    scanf("%d",&temp.degree);
    printf("Enter Student %d Section: ",n+1);
    scanf("%d",&temp.section);
    printf("Data for student %d is saved!\n",n+1);
    printf("\n");
    return temp;
}

void printData(struct* student group[])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("student %d\n\n",i+1);
        printf("Name : %s\n",group[i].name);
        printf("Age : %d\n",group[i].age);
        printf("Degree : %d\n",group[i].degree);
        printf("Section : %d\n\n",group[i].section);

    }
}
