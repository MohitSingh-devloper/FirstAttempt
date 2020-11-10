#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#define Maxsize 10

    int queue[Maxsize];
    int front= 0,rear= -1,choice,i;

int main() {


    int isempty() {
       if(front<0||front>rear)
       {
           printf("Yes The Queue is empty");
           return 1;
       }
       else
       {
        printf("NO The Queue is not empty");
        return 0;
       }
}

int isfull() {

   if(rear==Maxsize-1)
           {
           printf("Yes The Queue is full");
          return 1;
       }
       else
       {
        printf("NO The Queue is not full");
        return 0;
       }
}

void peek() {

   printf("\nThe top element of queue is::%d", queue[front]);
}

void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);

    }
          if(front>rear)
           printf("The Queue is empty");
}

void Dequeue() {

   if(!isempty()) {
                    front++;
                    printf("\nThe element is removed  from queue::\n");
                  }
   else {
          printf("\nCould not retrieve data, Queue is empty. :(\n");
        }
}

void Enqueue() {

   if(!isfull()) {
                     printf("\nEnter the Element you want to insert into Queue::");
                     rear++;
                     scanf("%d",&queue[rear]);
                    printf("\nThe element is added to queue::\n");
                 }
     else  {
           printf("Could not insert data, Queue is full.\n");
         }
}



    while(choice!=7)
    {
        printf("\nChose one from the below options.....\n");
        printf("\n1.Perform Enqueue Operation on Queue\n2.Perform Dequeue Operation on Queue\n3.Show the elements of Queue\n4.Show the top element of Queue\n5.Check if queue is empty or not \n6.Check if queue is full or not \n7.Exit");
        printf("\nEnter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                Enqueue();
                break;
            }
            case 2:
            {
                Dequeue();
                break;
            }
            case 3:
            {
               display();
                break;
            }

            case 4:
            {
                peek();
                break;
            }


            case 5:
            {
                isempty();
                break;
            }

             case 6:
            {
                isfull();
                break;
            }

            case 7:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("Please Enter valid choice :(");
            }
        };
}
   return 0;
}
