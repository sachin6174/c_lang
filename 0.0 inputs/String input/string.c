//Strings in c gets(), fgets(), getline(), getchar(), puts(), putchar(), strlen()

#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    char str[100000];
    scanf("%[^\n]s",str);
    // printf("%s",str);
    int a[10000];
    int size=0;
    
    str[strlen(str)-1]=' ';
    str[strlen(str)]='\0';
    for(int i=0;i<strlen(str);){   
        int j=i;
        for(   ;str[j]!=' ';j++ ){
        }
        int num=0;
        int f=1;
        for(int k=j-1;k>=i;k--){
            num+=f*(str[k]-'0');
            f*=10;
        }
        for(;str[j]==' ';j++ ){
        }
        a[size++]=num;
        i=j;
    }

    int sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}

