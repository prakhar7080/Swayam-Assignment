class myQueue {
    int *arr, n, front, rear, size;
public:
    myQueue(int n) {
        this->n = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == n;
    }

    void enqueue(int x) {
        if(isFull()) return;
        rear = (rear + 1) % n;
        arr[rear] = x;
        size++;
    }

    void dequeue() {
        if(isEmpty()) return;
        front = (front + 1) % n;
        size--;
    }

    int getFront() {
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if(isEmpty()) return -1;
        return arr[rear];
    }
};
