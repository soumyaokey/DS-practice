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
        printf("\nPress 1 add a new record \
             \n2 show all the records \
            \n3 to empty check \
            \n4 to show size\
            \n5 to clear the list \
            \n6 to search an record\
            \n0 to exit:");
        
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

            case 6:
            flag=1;\\ 1: no match found and 0: match found
            printf("\n Enter to search key:");
            scanf("%d",&inp_data);
            tmp =start;
            while (tmp!=NULL){
                if(tmp->data == inp_data){
                    print("\n Key %d found in the list",inp_data);
                    flag=0;
                    break;
                }
                tmp = tmp-> next;
            }
            if(flag){
                print("\n NO match found, with the given key %d",inp_data);
            }
            break;

         
            
            case 0:
             default:
            exit(0);
            }


        }
        return 0;
    }


