#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int main(){
    struct node*start= NULL;
    struct node* end = NULL;
    struct node* tmp= NULL, *tmp2 = NULL;
    int inp, inp_data,count=0;

    while(1){
        printf("\nPress 1 add a new record
            \n2 show all the records 
            \n3 to empty check 
            \n4 to show size
            \n5 to clear the list 
            \n0 to exit");
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


            case 3:
            print("\n The linked list is %s Empty", start==NULL?"":"not");
            break


            case 4: 
            tmp = start;
            while (tmp !=NULL){
                cout++;
                tmp=tmp->next;
            }
            print("\nTotal %d records found...",count);
            break;


            case 5:
            tmp =start;
            while(tmp!=NULL){
                tmp2=tmp->next;
                free (tmp);
                tmp =tmp2;
            }
            start = end =NULL;
            count=0;
            break;

            case 0:

            default:
            exit(0);
            }

            print("\n\n################################");


        }
        return 0;
    }




