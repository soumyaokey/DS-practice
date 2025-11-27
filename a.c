#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int main(){
    struct node*start= NULL;
    struct node* end = NULL;
    struct node* tmp= NULL;
    int inp, inp_data;

    while(1){
        printf("\nPress 1 add a new record\n2 show all the records \n0 to exit");
        scanf ("%d",imp);
        switch(inp){
            

            case 1:
            printf("\n Enter a number:");
            scanf (%d ,&inp-data)
            struct Node *new-node=(struct Node*) malloc(size of(struct Node));
            new-node->data =imp-data;
            new-node->next =null;
            if(start==NULL){
                start = new-node;
            }else{
                end->next=new_node;
            }
            end=new-node;
            break;

            
            case 2:

            tmp =start;
            while (tmp!=NULL){
                print("\n%d",tmp->data);
                tmp = tmp-> next;
            }
            break;
            
            case 0:

            default:
            exit(0);
            }


        }
        return 0;
    }


