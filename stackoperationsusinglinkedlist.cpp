#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
void push();
void pop();
void display();
void quit();
struct node* top;
int main()
{
    int i;
    while(1)
    {
        
        printf("Stack operations using linked lists\n");
         
        printf("1.push the element into stack\n");
        printf("2.pop the element\n");
        printf("3.display the elements\n");
        printf("4.exit from program\n");
        
        printf("enter the option u want to do\n");
        scanf("%d",&i);
        
        switch(i)
        {
            case 1 : push();
            break;
            case 2 : pop();
            break;
            case 3 : display();
            break;
            case 4 : exit(1);
            break;
        }
    }
    
}
void push()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the node data\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(top == NULL)
    {
        top = temp;
    }
    else
    {
         temp->link = top;
         top = temp;
    }
    
    
}
void pop()
{
    struct node* temp;
    if(top == NULL)
    {
        printf("there is no elements to display dude\n");
    }
    else
    {
        temp = top;
        top = top->link;
        temp->link = NULL;
    }
}
void display()
{
    struct node* temp;
    if(top == NULL)
    {
        printf("hey,there is no more elements to display dude\n");
    }
    else
    {
        temp = top;
        while(temp!= NULL)
        {
        printf("the node data is : %d\n",temp->data);
        temp = temp->link;
        }
        
    }
}