#include <bits/stdc++.h> 
#include<unordered_map>

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

Node *removeDuplicates(Node *head)
{
    Node* curr = head;
    Node* prev = NULL;
    unordered_map<int, int> visited;
    
    while(curr != NULL){
        if(!visited[curr->data]){
            visited[curr->data] = 1;
            prev = curr;
            curr = curr -> next;
        }
        else{
            prev -> next = curr -> next;
            delete curr;
        }
        curr = prev -> next;
    }
    return head;
}