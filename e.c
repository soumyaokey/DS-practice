#include<stdio.h>
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
        printf("\nPress 1 add a new record \
             \n2 show all the records \
            \n3 to empty check \
            \n4 to show size\
            \n5 to clear the list \
            \n6 to search an record\
            \n7 to delete a record \
            \n8 to insert a record \
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
            count++;
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

            case 7:
            printf("\n Enter a value:");
            scanf("%d",&inp_data);
            tmp =start;
            while (tmp!=NULL){
                if(tmp->data == inp_data){
                    if(tmp == start){
                        start = start->next;
                        free(tmp);
                        tmp = start;
                    }else{
                        tmp2->next = tmp->next;

                        if (tmp == end){
                            end = tmp2;
                        }   
                        free(tmp);
                        tmp = tmp2->next;
                    }
                    count--;
                    break;
                }

                tmp2 = tmp;
                tmp = tmp-> next;
               
            }
            break;

            case 8:
            cr =1;
            tmp = start;
            printf("\n Enter a number:");
            scanf("%d",&inp_data);
            new_node = (struct Node*) malloc (sizeof (struct Node));
            new_node->data = inp_data;
            new_node->next = NULL;
            print("enter place:")
            scanf("%d",&place);

            if(place<1 || place>count+2)
                print("place is out of range......");
            else}
             if(place ==1){
                new_node->next = start;
                start = new_node;
             }else if (count+1 == place){
                end->next = new_node;
                end = new_node;
                }else{
                    while (cr < place-1){
                        tmp = tmp->next;
                        cr++;
                    }
                    new_node->next = tmp->next;
                    tmp->next = new_node;
                }
                count++;
            }
            break;

           

            case 0:

            default:
            exit(0);
            }

            print("\n\n################################");


    
        return 0;
    





