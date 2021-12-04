#include <stdio.h>
#include <stdlib.h>


    struct list {
        int digit;
        struct list *next;
    };

    typedef struct list node;

    void insert(node **, int);
    void display(node *);

    int main(){
    
        node *head = NULL;
     
        insert(&head, 100);
        insert(&head, 200);
        display(head);
}


    void insert(node **head_ref, int num){
    
        node *p =  (node *) malloc(sizeof(node));
        p->digit = num;
        p->next = NULL;
        
        if (*head_ref == NULL ){
            *head_ref = p;
    }   
    else 
       {
         
        node *temp = *head_ref;
        
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next  = p;
    }
}


    void display(node *list){
   
    while(list != NULL) {
        printf("%d ", list->digit);
        list = list -> next;
    }
}

