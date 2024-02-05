//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Linked List
#include<iostream>

using namespace std;
// A Linked List Node
class Node
{
    public:
    int data;
    Node* next;
};
class linklist{
    Node *head;
     linklist(){
        head=NULL;
    }
    // Helper function to print a given linked list
    void printList()
    {
        Node* ptr = head;
        while (ptr)
        {
            cout << " —> " << ptr->data;
            ptr = ptr->next;
        }
    
        cout << "NULL\n" ;
    }
 
// Helper function to insert a new node at the beginning of the linked list
void push( Node** head, int data)
{
     Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
 
// Recursive function to rearrange the list
void rearrange( Node* head,  Node* odd,  Node* even,
                 Node** oddRef)
{
    // we have reached the end of the list
    if (head == NULL)
    {
        // null terminate the list
        odd->next = NULL;
 
        // join even and odd sublist
        even->next = (*oddRef)->next;
        return;
    }
 
    // if the current node is odd
    if (head->data & 1)
    {
        odd->next = head;
        rearrange(head->next, head, even, oddRef);
    }
 
    // if the current node is even
    else {
        even->next = head;
        rearrange(head->next, odd, head, oddRef);
    }
}
 
// Rearrange a given linked list by separating odd nodes
// from even ones and maintaining their relative order.
void rearrangeEvenOdd(struct Node** head)
{
     Node* odd = new Node();
     Node* even = new Node();
 
    rearrange(*head, odd, even, &odd);
    *head = even->next;
 
    free(odd);
    free(even);
}
 
};
int main(void)
{
    linklist List ;
    // input keys
    int keys[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct Node* head = NULL;
    for (int i = n - 1; i >=0; i--) {
        List.push(&head, keys[i]);
    }
 
    List.rearrangeEvenOdd(&head);
    List.printList();
 
    return 0;
}