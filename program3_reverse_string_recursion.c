#include<stdio.h>
#include<conio.h>
void reverse(char str[],int i)
{  
    if(str[i]=='\0')
    {
        return;
    }
    reverse(str,i+1);
    printf("%c",str[i]);
}
int main()
{
    char str[20];
    printf("enter the string \n ");
    gets(str);
    printf("the reverse string is \n");
    reverse(str,0);
    return 0;
    getch();
}


