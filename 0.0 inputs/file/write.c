#include<stdio.h>
int main(int argc, char const *argv[])
{   
    FILE *ptr = NULL;
    char string[100000] ;
    scanf("%[^$]s",string);
    ptr = fopen("myfile.txt", "a");// a-> append mode
    fprintf(ptr, "%s", string);
    return 0;
}
