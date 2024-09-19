#include<stdio.h>
int main()
{
    int a;
    int num=1;

    printf("Enter the Natural Number :");
    scanf("%d",&a);

    printf("The number Natural Number is %d \n",a);

    while (num <= a)
    {
        printf("%d \n",num);
        num++;
    }

    return 0;
}