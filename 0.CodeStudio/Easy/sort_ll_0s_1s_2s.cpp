#include<stdio.h>

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


Node* sortList(Node *head)
{
    int zc = 0;
    int oc = 0;
    int tc = 0;
    
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data ==0)
            zc++;
        else if(temp->data==1)
            oc++;
        else if(temp->data==2)
            tc++;
        
        temp = temp->next;
    }
    
    temp=head;
    while(temp!=NULL)
    {
        if(zc!=0)
        {
            temp->data=0;
            zc--;
        }
        else if(oc!=0)
        {
            temp->data=1;
            oc--;
        }
        else if(tc!=0)
        {
            temp->data=2;
            tc--;
        }
        temp=temp->next;
    }
    return head;
}

// without replacing 
// void insertAtTail(Node* &tail, Node* curr ) {
//     tail -> next = curr;
//     tail = curr;
// }


// Node* sortList(Node *head)
// {
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;
    
//     Node* curr = head;
    
//     // create separate list 0s, 1s and 2s
//     while(curr != NULL) {
        
//         int value = curr -> data;
        
//         if(value == 0) {
//             insertAtTail(zeroTail, curr);
//         }
//         else if(value == 1) {
//             insertAtTail(oneTail, curr);
//         }
//         else if(value == 2) {
//             insertAtTail(twoTail, curr);
//         }       
//         curr = curr -> next;
//     }
    
//     //merge 3 sublist
    
//     // 1s list not empty
//     if(oneHead -> next != NULL) {
//         zeroTail -> next = oneHead -> next;
//     }
//     else {
//         //1s list -> empty
//         zeroTail -> next = twoHead -> next;
//     }
    
//     oneTail -> next = twoHead -> next;
//     twoTail -> next = NULL;
    
// 	//setup head 
//     head = zeroHead -> next;
    
//     //delete dummy nodes
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;
    
//     return head;
// }