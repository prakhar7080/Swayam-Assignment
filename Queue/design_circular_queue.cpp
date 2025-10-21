class MyCircularQueue {
private:
    int start;
    int currentSize;
    int maxCapacity;
    vector<int> data;

public:
    MyCircularQueue(int k) {
        maxCapacity = k;
        data = vector<int>(k);
        start = currentSize = 0;
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        int position = (start + currentSize) % maxCapacity;
        data[position] = value;
        ++currentSize;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        start = (start + 1) % maxCapacity;
        --currentSize;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return data[start];
    }

    int Rear() {
        if (isEmpty()) return -1;
        int position = (start + currentSize - 1) % maxCapacity;
        return data[position];
    }

    bool isEmpty() {
        return currentSize == 0;
    }

    bool isFull() {
        return currentSize == maxCapacity;
    }
};
