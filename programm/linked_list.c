#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct nodetype{
    int data;
    struct nodetype*next;
}node*;
node*head=null;
void create_node(node**head);
void insertat_beg(node**head);
void traverinode(node**head);
void traverreverse(node**head);
void delfrombeg(node**head);
void delfromend(node**head);
void *search(node*head,int value);
void insertafter(node*head,int value);
void deleteafter(node*head,int value);
void insertbefore(node*head,int value);
insert deletebefore(node*head,int value);
void display(node*head);
void deletelist(node,head);
int main(){
    int choice;
    while(1)
    {
        printf("press 1 for create node:");
        printf("press 2 for insert at beg");
        printf("press 3 for traverse in order");
        printf("press 4 for traverse in reverse");
        printf("press 5 for delete from beg");
        printf("press 6 for delete form end");
        printf("press 7 for search");
        printf("press 8 for insert at after")
        printf("press 9 for insert before node");
        printf("press 10 for delete before node");
        printf("press 11 for insert at end");
        printf("press 12 for display");
        printf("press 13 for exit");
        printf("enter your choice");
        clrscr();
        switch(choice){
            case 1:
                craete_node(&head)
                break;
            case 2:
                insertat_beg(&head)
                break;
            case 3:
                traverinode(&head)
                break;
            case 4:
                traverreverse(&head);
                break;
            case 5:
                delfrombeg(&head);
                break;
            case 6:
                delfromend(&head)
                break;
            case 7:
                {
                    int value;
                    printf("enter the value after which to insert ");
                    scanf("%d",&value);
                    deleteafter(head,value)
                }
                break;
            case 8:
                {
                    int value;
                printf("enter the value after which to delete");
                scanf("%d",&value);
                deleteafter(head,value)
                }       
                break;
            case 9:
                {
                    int value;
                    printf("enter value before which to insert");
                    scanf("%d",&value);
                    insert before(&head,value);
                }
                break;
            case 10:
                {
                    int value;
                    printf("enter the value before which to delete")
                    scanf("%d",&value);
                    deletebefore(&head,value);
                }
                break;
            case 11:
                insert(&head);
                break;
            case 12:
                display(head);
                break;
            case 13:
                deletelist(&head);
                break;
            default:
                printf("enter a valid number");
            
        }


    }
    return 0;
}
void create_node(node**head)
{
    node*temp;
    temp=(node*malloc(sizeof(node)));
    printf("enter the data");
    scanf("%d",&temp->data);
    temp->next=null;
    if(null==*head)
    {
        *head=temp;
    }
    else{
        node*p=*head;
        while(p->next!=null){
            p=p->next;
        }
        p ->next=temp;
    }
}
void insert_beg(node**head)
{
    
}