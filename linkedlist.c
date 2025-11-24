#include<stdio.h>
#include<stdlib.h>
void lastinsert(int);
struct node{
    int data;
    struct node *next;
};
struct node *head;
int main(){
    int choice, item;
    do{
        printf("\n Enter the item which you want to insert?\n");
        scanf("%d", &item);
        lastinsert(item);
        printf("\n Press 0 to insert more?\n");
        scanf("%d", &choice);
    } while(choice == 0);
    return 0;
}
void display(struct node *node){
    printf("\nLinked list: ");
    while(node != NULL){
       printf("%d", node->data);
       node = node->next;
    }
         printf("\n");
    }
    void lastinsert(int item){
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
        struct node *temp;
        if(ptr == NULL){
            printf("\nOVERFLOW");
        }
        else{
            ptr->data = item;
            if(head == NULL){
                ptr->next = NULL;
                head = ptr;
                printf("\nNode inserted");
            }
            else{
                temp = head;
                while (temp -> next != NULL){
                    temp = temp -> next;
                }
                temp->next = ptr;
                ptr->next = NULL;
                printf("\nNode inserted");
                display (head);
            }
        }
    }