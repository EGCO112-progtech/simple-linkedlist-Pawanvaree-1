//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int z=5;
    struct node a,b,*head ;
    a.value = z;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    printf("Exercise I\n");
    printf("%d\n", head ->value ); //what value for 5 (a)
    printf("%d\n", head ->next->value ); //what value for 8 (b)
    
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    struct node c;
    b.next=&c;
    c.value=11;
    c.next=NULL;
    printf("%d\n", head ->next->next->value ); //what value for 11 (c)

/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    printf("Exercise II\n");
    struct node d;
    d.next=&a;
    d.value=2;
    head=&d;
    printf("%d\n",head->value);
    printf("%d\n",head->next->value);
    printf("%d\n",head->next->next->value);
    printf("%d\n",head->next->next->next->value);



    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate

        
    /*  Exercise III Use loop to print everything*/
        printf("Exercise III\n");
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp = tmp -> next;// What is missing???
        }
        printf("\n");
    
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
        tmp=head;
        printf("Exercise IV\n");
         while(tmp != NULL){
            printf("%3d", tmp->value);
            tmp = tmp -> next;// What is missing???
        }
        printf("\n");
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!*/
         //use a loop to help
        printf("Exercise V\n");
        typedef struct node NODE;
        int j,m=3;
        NodePtr head1,temp;
        head1 = (NodePtr)malloc(sizeof(NODE));
        temp = head1;
        head1->value = 2;
        printf("%3d", temp->value);
        //temp = temp -> next;
        for(j=0;j<m;j++){
            if(j == m){
                temp -> next = NULL;
            }
            else{
                temp->next=(NodePtr)malloc(sizeof(NODE));
                temp->next->value = temp->value+3;
                temp = temp -> next;
                printf("%3d", temp->value);
            }
        }
        printf("\n");

     

    /*  Exercise VI Free all node !!*/
         //use a loop to help
         printf("Exercise VI\nFree All Node!!!\n");
        while(head1 != NULL){
            printf("%3d", head1->value);
            temp = head1;
            head1 = head1 -> next;
            free(temp);
        }
    
    return 0;

    
}
