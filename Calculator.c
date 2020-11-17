#include <stdio.h>
#include <conio.h>
int main(){

char ch;
int a,b;

int add()
{
   	printf("Enter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a+b;
}

int sub()
{
   	printf("Enter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a-b;
}

int mul()
{
   	printf("Enter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a*b;
}

int div()
{
   	printf("Enter the value of first number::: ");
    scanf("%d",&a);
	printf("Enter the value of second number::: ");
    scanf("%d",&b);
    return a/b;
}

int mod()
{
   	printf("Enter the value number::: ");
    scanf("%d",&a);
	printf("Enter the value of divisior number::: ");
    scanf("%d",&b);
    return a%b;
}

	do{
	int c;
    printf("\nEnter the operation you want to perform:: \n1:Addition  2:Substraction  3:Multiplication  4:Division  5:Modulas ::: ");
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
		result=div();
		break;


	case 5:
		result=mod();
		break;

		default:
        printf("\nyou entered invalid operation :( ");

	}

	printf("The result is ::: %d ",result);

	printf("\nDo you want to continue ::y for yes and any other key for no::");
     scanf("%d",&ch);

	}while(ch=='y');

}
