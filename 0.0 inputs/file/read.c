#include<stdio.h>
int main(int argc, char const *argv[])
{   
    FILE *ptr = NULL;
    char string[100000];
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%[^\0]s", string);
    printf("The content of this file has %s\n",string );
    
    return 0;
}
