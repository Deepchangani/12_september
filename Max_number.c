#include<stdio.h>
#include<conio.h>
int main()
{
    int n,max=0;
    printf("enter the number \n");
    scanf("%d",&n);
    int digit;
    while(n!=0)
    {
        //1562    2>0       
        digit=n%10;

        if(digit>max)
        {
            max=digit;
        }
        n=n/10;

    }
    printf("%d is maximum ",max);
    return 0;
    getch();
}

// // max numbers  1562  max 6
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     //1562 2
//     int n,max=0;
//     printf("enter  number \n");
//     scanf("%d",&n);  

//     int digit;
//     while(n!=0)
//     {
//         digit=n%10;
//         if(digit>max)
//         {
//             max=digit;   
//         }
//         n=n/10;
//     }

//     printf("%d maximum",max);
//       // 1562       5162 
//     // int arr[4];
//     // for(int i=0;i<4;i++)
//     // {
//     //    for(int j=i+1;j<4;j++)
//     //    {
//     //         if(arr[j]>arr[i])
//     //         {
//     //             max=arr[j];
//     //             j++;
//     //             i++;
//     //         }
//     //    }
//     // }


//     return 0;
//     getch();
// }
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,max=0;
    printf("enter the number \n");
    scanf("%d",&n);
    int digit;
    while(n!=0)
    {
        //1562    2>0       
        digit=n%10;

        if(digit>max)
        {
            max=digit;
        }
        n=n/10;

    }
    printf("%d is maximum ",max);
    return 0;
    getch();
}