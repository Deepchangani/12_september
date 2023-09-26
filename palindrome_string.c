#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
        // palindrome or not check  deep
    // char str[20],temp[20];
    // printf("enter the string \n");
    // gets(str);

    // strcpy(temp,str);   // hahah
    // strrev(str);    //hahah
    // if(strcmp(temp,str)==0)
    // {
    //     printf("it is a palindrome string ");
    // }
    // else
    // {
    //     printf("its not palindrome");
    // }
    // int i=0;
    // while(str[i]!='\0')
    // {
    //     if(str[i]==strlen(str)-1)
    //     {
    //         i++;
    //         strlen(str)--;
    //     }
    //     else
    //      printf("it isnt palindrome");
    // }

    char str[19],temp[19];
    int flag=0,j,length=0,i;
    printf("enter a string \n");
    gets(str);
    for( i=0;str[i]!='\0';i++)
    {
        length++;
    }
    for( i=0,j=length-1;i<j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("its not palindrome");
    }
    else
    {
        printf("it is a palindrome");
    }

    return 0;
    getch();
}