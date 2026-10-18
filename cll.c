#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
int count = 0;

void createlist();
void traverse();
void insertatbegin();
void insertatend();
void insertatpos();

int main() {
    int choice;
    while (1) {
        printf("\n----LIST MENU----\n");
        printf("1. Create linked list\n");
        printf("2. Display\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at End\n");
        printf("5. Insert at specific position\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createlist(); break;
            case 2: traverse(); break;
            case 3: insertatbegin(); break;
            case 4: insertatend(); break;
            case 5: insertatpos(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }    
}

void createlist() {
    int n, i = 1; 
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    while (i <= n) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        count++;
        
        if (head == NULL) {
            head = newnode;
        } else {
            struct node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        i++;
    }
}

void traverse() {
    struct node* temp = head;
    if (head == NULL) { 
        printf("List is empty...\n"); 
        return; 
    }

    printf("List: ");
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertatbegin() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    count++; // Fixed: Increment count
}

void insertatend() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    count++; // Fixed: Increment count

    if (head == NULL) {
        head = newnode;
        return;
    } else {
        struct node* temp = head; // Fixed: Initialize temp to head
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insertatpos() {
    int pos;
    printf("Enter the position where you want to add: ");
    scanf("%d", &pos);

    // Fixed: Can insert from position 1 up to count + 1
    if (pos < 1 || pos > count + 1) {
        printf("INVALID POSITION\n");
        return;
    }

    if (pos == 1) {
        insertatbegin();
        return; // Fixed: Return so it doesn't run the rest of the function
    }

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);
    count++; // Fixed: Increment count

    struct node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    printf("Inserted successfully!\n");
}