class myQueue {
  private:
  int* arr;
  int capacity;
  int front;
  int rear;
  int currsize;
  
  public:
    myQueue(int n) {
        capacity = n;
        arr = new int[capacity];
        front=0;
        rear=0;
        currsize=0;
    }

    bool isEmpty() {
        return currsize==0;
    }

    bool isFull() {
        return currsize==capacity;
    }

    void enqueue(int x) {
        if(isFull()) return;
        arr[rear]=x;
        rear = (rear+1)%capacity;
        currsize++;
    }

    void dequeue() {
        if(isEmpty()) return;
        front=(front+1)%capacity;
        currsize--;
    }

    int getFront() {
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if(isEmpty()) return -1;
        int lastindx = (rear-1+capacity)%capacity;
        return arr[lastindx];
    }
};