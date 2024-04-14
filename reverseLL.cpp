#include <bits/stdc++.h>
//submited on code studio 
//https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
// recursve method 
LinkedListNode<int>* reverse1(LinkedListNode<int>* head){
    //base case

    if(head==NULL || head->next ==NULL){
        return head;
    }
    LinkedListNode<int>* chotaPartOfLL = reverse1(head->next);
    head->next->next = head;
    head->next =NULL;

    return chotaPartOfLL;

}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse1(head);
    // Write your code here iterative approach
    
    /*
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *forward = NULL;



    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;

    }
    return prev;
    */
}
