#include <iostream>
using namespace std;

struct Qnode {
    int data;
    Qnode* next;
};

struct List {
    Qnode* head;
    Qnode* front;
    Qnode* rear;
    int size;
};

const int maxsize = 3;
List queue = {nullptr, nullptr, nullptr, 0};

bool IsEmpty() {
    return queue.head == nullptr;
}

bool IsFull() {
    return queue.size >= maxsize;
}

void Enqueue(int data) {

    if (IsFull()) {
        cout << "Queue penuh, tidak bisa menambahkan elemen: " << data << endl;
        return;
    }

    Qnode* newNode = new Qnode;
    newNode->data = data;
    newNode->next = queue.head;

    if (IsEmpty()) {
        queue.head = newNode;
        queue.front = newNode;
        queue.rear = newNode;
    } else {
        queue.head = newNode;
        queue.rear = newNode;
    }
    queue.size++;
    cout << "Enqueued: " << data << endl;

}
void InsertAfter(int afterData, int newData) {
    Qnode* current = queue.head;
    while (current != nullptr && current->data != afterData) {
        current = current->next;
    }

    if (current != nullptr) {
        Qnode* newNode = new Qnode;
        newNode->data = newData;
        newNode->next = current->next;
        current->next = newNode;

        if (newNode->next == nullptr) {
            queue.rear = newNode;
        }
        queue.size++;
        cout << "Inserted " << newData << " after " << afterData << endl;
    } else {
        cout << "Elemen " << afterData << " tidak ada di antrian." << endl;
    }
}

void Dequeue() {

    if (IsEmpty()) {
        cout << "Queue kosong, tidak ada yang di-dequeue" << endl;
        return;
    }


    if (queue.head->next == nullptr) {
        cout << "Dequeued 1: " << queue.rear->data << endl;
        Qnode* temp = queue.head;
        queue.head = nullptr;
        queue.rear = nullptr;
        queue.front = nullptr;
    }
    else {
        Qnode* current = queue.head;
        while (current->next != nullptr) {
            queue.front = current;
            current = current->next;
        }
        Qnode* temp = current;
        cout << "Dequeued 2: " << current->data << endl;
        queue.front->next = nullptr;
        delete temp;
    }
    queue.size--;
}

void displayQueue() {
    if (IsEmpty()) {
        cout << endl << "---------------------------------------" <<endl;
        cout << "Queue kosong" << endl;
        return;
    }
    Qnode* current = queue.head;
    cout << "Isi queue:" << endl << endl;
    while (current != nullptr) {
        cout << "Alamat: " << current << endl;
        cout << "Nilai: " << current->data << endl;
        cout << "Alamat next: " << current->next << endl;
        cout << "[Front: " << queue.front->data << "]" << endl;
        cout << "[Rear: " << queue.rear->data << "]" << endl << endl;
        current = current->next;
    }
    cout << endl << "---------------------------------------" <<endl;
}

int main() {

    if (IsEmpty()) {
        cout << "Queue baru saja diinisialisasi dan kosong." << endl;
    }

    Enqueue(10);
    displayQueue();
    Enqueue(20);
    displayQueue();
    Enqueue(30);
    displayQueue();

    InsertAfter(30, 40);
    displayQueue();

    Dequeue();
    displayQueue();

     Enqueue(10);
    displayQueue();

    return 0;
}
