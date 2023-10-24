#include<stdio.h>
int main()
{
    float s1,s2,s3,ls,sum;
    printf("Enter the sides of the triangle");
    scanf("%f%f%f",&s1,&s2,&s3);
    if (s1>s2)
    {if(s1>s3)
    sum=s2+s3;
    ls=s1;

    }
    else
        sum=s1+s2;
        ls=s3;




    if(s2>s3)
        sum=s3+s1;
        ls=s2;
        return 0;

}
