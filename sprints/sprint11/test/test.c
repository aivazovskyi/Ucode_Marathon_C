#include <stdlib.h>

typedef struct node 
{
    int a;
    struct node* next;
}              t_list;

#include <stdio.h>

void printlist(t_list *head) {
    t_list *temp = head;

    while (temp != NULL) {
        printf("%d - ", temp->a);
        temp = temp->next;
    }
    printf("\n");
}

t_list *create_new_node(int a) {
    t_list *new_nodes = NULL;    

    new_nodes = (t_list *)malloc(sizeof(t_list));
    new_nodes->a = a;
    new_nodes->next = NULL;
    return new_nodes;    
}

t_list *mx_push_front(t_list **head, t_list *node_to_insert) {
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}


int main() {
    t_list *head = NULL;
    t_list *tmp;


    for (int i = 0; i < 25; i++) {
        tmp = create_new_node(i);
        head = mx_push_front(&head, tmp);
    }

    printlist(head);

}   
    
// int main() {
//     t_list *head;
//     t_list *tmp;

//     tmp = create_new_node(32);
//     head = tmp;
//     tmp = create_new_node(8);
//     tmp->next = head;
//     head = tmp;
//     tmp = create_new_node(34);
//     tmp->next = head;
//     head = tmp;

//     printlist(head);
   
    
// }


// int main() {
//     t_list n1, n2, n3, n25;
//     t_list *head;

//     n1.a = 45;
//     n2.a = 8;
//     n3.a = 32;
//     n25.a = 16;

//     head = &n1;
//     n3.next = NULL;
//     n2.next = &n3;
//     n1.next = &n2;
    

//     printlist(head);

//     n25.next = &n3;
//     n2.next = &n25;

//     printlist(head);
// }

