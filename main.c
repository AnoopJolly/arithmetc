#include<stdio.h>
#include"main.h"
int main()
{
    uint8_t a,b,c,d,e,f,g;
    printf("Enter the values for a and b \n");
    scanf("%d\n %d",&a,&b);

    printf("enter code for Multiplication press 3\nFor addition press 1\nFor substraction press 2\nFor division press 4\n");
    scanf("%d",&g);

    switch (g)
    {
        case (1):
       {

        c=ad(a,b);
        printf("addition= %d",c);
        break;
    }


    case(2):
     {
         d=su(a,b);
        printf("Substarction= %d\n",d);
        break ;
       }
    case(3):
        {
            e=mul(a,b);
     printf("multiplication=%d\n",e);
     break ;
        }
     case(4):
    {
    f=div(a,b);
     printf("Divi= %d"\n,f);

    break;
    }
}
return 0;
}
