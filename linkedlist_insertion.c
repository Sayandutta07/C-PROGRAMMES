#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int num;
        struct node*next;
    };
    struct node*head,*newnode,*temp;
    head = NULL;
    int choice=1; int count = 0;int pos;
    while (choice == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data(value): ");
        scanf("%d",&newnode->num);
        newnode->next = NULL;
        if(head == NULL){
            head = temp = newnode;
            
        }
        else{
            temp ->next = newnode;
            temp = newnode;
            
        }
        printf("Do you want to continue?\n(1-> add newnode\n2->add newnode at beginning)\n3-> add newnode at end\n ");
        printf("Enter choice: ");
        scanf("%d",&choice);
        count++;
    }
    
    

    if(choice == 2){
        //add new node at beginning 
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d",&newnode->num);
        newnode->next = head;
        head = newnode;
    
    }
    if(choice == 3){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data to end: ");
        scanf("%d",&newnode->num);
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
            
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
            
        }
    }
    
    
    if(choice==4){
        printf("\nEnter the position after which you want to add: ");
        scanf("%d",&pos);
        if(pos < 1 || pos > count){
            printf("invalid input");
            return 0;
        }
        else{
            temp = head;
            int i = 1;
            while(i < pos){
                temp = temp->next;
                i++;
            }
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter the value you want to add after position %d:",pos);
            scanf("%d",&newnode->num);
            newnode->next = temp->next;
            temp->next = newnode;
            
        }
    }
    if(choice == 5){
        printf("Enter the position before which you want to add: ");
        scanf("%d",&pos);
        if(pos>count){
            printf("Invalid Input !");
            return 0;
        }
        else{
            temp = head;
            int i =1;
            while(i<pos-1){
                temp = temp-> next;
                i++;
            }
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter the value before postion %d: ",pos);
            scanf("%d",&newnode->num);
            newnode->next = temp->next;
            temp->next = newnode;}}
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->num);
        temp = temp->next;

    }}


