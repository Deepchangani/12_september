#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
    if(n<=0 )
    {
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int ans=factorial(n);
    printf("%d",ans);


    return 0;
    getch();
}