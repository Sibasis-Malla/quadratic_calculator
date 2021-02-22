#include<stdio.h>
#include<math.h>

int main()
{
    float a , b, c,d,root;
    printf("Welcome To Quadratic Calculator\n")';
    printf("==================================");
    printf("A quadratic equation is in the form : ax^2+bx+c=0\n");

    printf("Enter a : ");
    scanf("%f",&a);

    printf("Enter b : ");
    scanf("%f",&b);
    
    printf("Enter c : ");
    scanf("%f",&c);

    printf("The quadratic equation is : (%0.2f)X^2 + (%0.2f)X + (%0.2f)=0",a,b,c);


    if((b*b-4*a*c)<0 )
    {
    printf("\nThe roots are imaginary\n");
    d = sqrt((b*b-4*a*c)*-1);
    
    printf("The roots are: %0.2f + %0.2fi and %0.2f - %0.2fi\n",-b/2,d/2,-b/2,d/2);
  
    }
    else if((b*b-4*a*c)>0 )
    {
    printf("\nThe roots are real\n");
    d = sqrt((b*b-4*a*c));
    
    printf("The roots are: %0.2f and %0.2f \n",-b/2+d/2,-b/2-d/2);

    }
   else if((b*b-4*a*c)==0 )
    {
    printf("\nThe roots are real and equal\n");
    d = sqrt((b*b-4*a*c));
    
    printf("The root is : %0.2f\n ",-b/2+d/2);

    }






}
