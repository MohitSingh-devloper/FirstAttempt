#include <stdio.h>
#include <stdlib.h>

int a,b;

int add()
{
   	printf("\nEnter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a+b;
}

int sub()
{
   	printf("\nEnter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a-b;
}

int mul()
{
   	printf("\nEnter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a*b;
}

void division()
{
    float a,b;
   	printf("\nEnter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    if(b==0)
    {
    printf("The number can't be divided by the 0 ");
    }
    else
    printf("The result of division is:::%f ",a/b);

}

int mod()
{
   	printf("\nEnter the value number::: ");
    scanf("%d",&a);
	printf("Enter the value of divisior number::: ");
    scanf("%d",&b);
    return a%b;
}

int factorial()
{
    int i,fact=1;
    printf("\nEnter the number for factorial::: ");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

void prime()
{
    int i;
    printf("\nEnter the number you want to check for prime::: ");
    scanf("%d",&a);

			for(i=2;i<a;i++)
			{
			 if (a%i==0)
			 {
				 break;
			 }
			}
			if(i==a)
				printf("%d  is a prime Number :) ",a);
			else
				printf("%d  is not a prime Number :( ",a);

}

void perfect()
{
    int i,perfect=0;
    printf("\nEnter the number you want to check for perfect::: ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            perfect=perfect+i;
        }
    }
    if(a==perfect)
    printf("%d  is a perfect Number :) ",a);
    else
    printf("%d  is not a perfect Number :( ",a);
}

void armstrong()
{
    int i,arm=0,n;
    printf("\nEnter the number you want to check for armstrong::: ");
    scanf("%d",&a);
     i=a;
    while(i>0)
    {
        n=i%10;
        arm=arm+(n*n*n);
        i=i/10;
    }

    if(a==arm)
    printf("%d  is a armstrong Number :) ",a);
    else
    printf("%d  is not a armstrong Number :( ",a);
}


void palindrome()
{
    int i,n,result=0;
    printf("\nEnter the number you want to check for palindrome::: ");
    scanf("%d",&a);
			for(i=a;i>0;)
			{
                n=i%10;
                result=result*10+n;
				i=i/10;
			}
            if(a==result)
			 printf("\n%d is a palindrome Number :) ",a);
			else
            printf(" %d is not a palindrome Number :( ",a);
}

void SimpleIntrest()
{
    float p,r,t;

			printf("\nEnter initial principal balance:::");
			scanf("%f",&p);
			printf("Enter annual interest rate(in percentage):::");
			scanf("%f",&r);
			printf("Enter time (in years):::");
			scanf("%f",&t);
			float si=(p*r*t)/100;
			printf("\nFinal amount of intrest to be paid:: %f",si);
}

int main(){
  int c;
while(c!=12)
{


    printf("\n\n   Choose the number for operation you want to perform:: \n1:Addition  2:Substraction  3:Multiplication  4:Factorial  5:Modulas  6:Division\n7:Check Prime  8:Check Palindrome  9:Check Perfect  10:Check Armstrong  11:Simple Intrest  12:Exit::: ");
    scanf("%d",&c);

	int result = 0;
	switch(c)
	{
	case 1:
		result=add();
		break;

	case 2:
		result=sub();
		break;

	case 3:
		result=mul();
		break;

	case 4:
	result=factorial();
		break;


	case 5:
		result=mod();
		break;

	case 6:
        division();
		break;

    case 7:
         prime();
		break;

    case 8:
       palindrome();
		break;

    case 9:
        perfect();
		break;

    case 10:
        armstrong();
		break;

    case 11:
        SimpleIntrest();
		break;

    case 12:
        printf("\nExiting the application............. ");
        system("cls");
		break;

		default:
        printf("\nyou entered invalid operation :( ");

	}
     if(c<=5){
            printf("The result is ::: %d ",result);
     }

}
}
