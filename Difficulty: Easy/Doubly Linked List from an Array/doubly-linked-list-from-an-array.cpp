/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return nullptr;
        Node* head = new Node(arr[0]);
        Node* tail = head;
        for(int i=1;i<n;i++){
            Node* newnode = new Node(arr[i]);
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        return head;
    }
};