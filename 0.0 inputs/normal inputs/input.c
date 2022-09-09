#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks=0;
    int marks1=0;
    int marks2=0;

    //single input
    scanf("%d", &marks); 

    // multiple input
    int x,y;
    scanf("%d %d", &x, &y);// we need to give address of variable to take input


    printf("Print %d",marks);
    printf("\n%d %d %d",marks,marks1,marks2);

    // garbadge will be printed at place of mark2
    printf("\n%d %d %d",marks,marks1);
    return 0;
}
