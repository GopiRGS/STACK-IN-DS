#include<stdio.h>
#include<stdlib.h>
int stack[100],i,j,choice=0,n,top=-1;
void push(){
    int val;
    if(top==n)
        printf("\n overflow");
    else{
        printf("enter the value : ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1)
        printf("\n under flow ");
    else
        top=top-1;
}
void show(){
    for(i=top;i>=0;i--){
        printf("%d\n ",stack[i]);
    }
    if(top==-1){
        printf("stack is empty \n");
    }
}

int main ()
{

    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);
    printf("*********Stack operations using array*********");

    printf("\n----------------------------------------------\n");
    while(choice != 4)
    {
        printf("Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
                {
                    pop();
                    break;

                }
            case 3 :
                {
                    show();
                    break;
                }
            case 4 :
                exit(0);

            default:
            {
                printf("Please Enter valid choice ");
            }
}
    }
}
