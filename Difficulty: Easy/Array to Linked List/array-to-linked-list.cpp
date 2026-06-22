class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        int n=arr.size();
        if(arr.size()==0) return NULL;
        Node* head = new Node(arr[0]);
        Node* tail = head;
        for(int i=1;i<n;i++){
            Node* newNode = new Node(arr[i]);
            tail->next=newNode;
            tail= newNode;
        }
        return head;
    }
};