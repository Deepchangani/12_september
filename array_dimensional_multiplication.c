#include <stdio.h>
#include <conio.h>
int main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 7};
    int b[2][3] = {1, 2, 3, 4, 5, 6};
    int c[2][3];

    printf("first --- matrix \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("second --- matrix \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
  

    printf("Addition of --- matrix \n");
      int j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
             printf(" %d ", c[i][j]);
        }
       
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a[2][3] = {1, 2, 3, 4, 5, 7};
//     int b[2][3] = {1, 2, 3, 4, 5, 6};
//     int c[2][3];

//     printf("first --- matrix \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("second --- matrix \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ", b[i][j]);
//         }
//         printf("\n");
//     }
  

//     printf("multiplication of --- matrix \n");
//       int j;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] * b[i][j];
//              printf(" %d ", c[i][j]);
//         }
       
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a[2][3] = {1, 2, 3, 4, 5, 7};
//     int b[2][3] = {1, 2, 3, 4, 5, 6};
//     int c[2][3];

//     printf("first --- matrix \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("second --- matrix \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ", b[i][j]);
//         }
//         printf("\n");
//     }
  

//     printf("Substraction of --- matrix \n");
//       int j;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] - b[i][j];
//              printf(" %d ", c[i][j]);
//         }
       
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a[2][3] = {1, 2, 3, 4, 5, 7};
//     int b[2][3] = {1, 2, 3, 4, 5, 6};
//     int c[2][3];

//     printf("first --- matrix \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("second --- matrix \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ", b[i][j]);
//         }
//         printf("\n");
//     }
  

//     printf("substraction of --- matrix \n");
//       int j;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] - b[i][j];
//              printf(" %d ", c[i][j]);
//         }
       
//         printf("\n");
//     }
//     return 0;
// }