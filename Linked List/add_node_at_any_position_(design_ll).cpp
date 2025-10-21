#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* curr = head;
        for (int i = 0; i < index; i++) curr = curr->next;
        return curr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next) curr = curr->next;
            curr->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 0; i < index - 1; i++) curr = curr->next;
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* curr = head;
            for (int i = 0; i < index - 1; i++) curr = curr->next;
            Node* toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
        }
        size--;
    }
};

/**
 * Example usage:
 * MyLinkedList* myLinkedList = new MyLinkedList();
 * myLinkedList->addAtHead(1);
 * myLinkedList->addAtTail(3);
 * myLinkedList->addAtIndex(1, 2);    // linked list becomes 1->2->3
 * cout << myLinkedList->get(1) << endl; // 2
 * myLinkedList->deleteAtIndex(1);    // now the linked list is 1->3
 * cout << myLinkedList->get(1) << endl; // 3
 */
