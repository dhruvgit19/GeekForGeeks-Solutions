class myStack {
  private:
    int* arr;
    int capacity;
    int topIndex;
  public:
    myStack(int n) {
        capacity=n;
        arr=new int[capacity];
        topIndex=-1;
    }

    bool isEmpty() {
        return topIndex==-1;
    }

    bool isFull() {
        return topIndex==capacity-1;
    }

    void push(int x) {
        if(isFull()){
            return;
        }
        topIndex++;
        arr[topIndex]=x;
    }

    void pop() {
        if(isEmpty()){
            return;
        }
        topIndex--;
    }

    int peek() {
        if(isEmpty()){
            return -1;
        }
        return arr[topIndex];
    }
};