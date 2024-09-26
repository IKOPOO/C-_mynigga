#include <iostream>
#include <string>
using namespace std;

// https://www.geeksforgeeks.org/typedef-in-cpp/
typedef string QueueElement;

// Struktur node dll
struct Node {
    QueueElement data;
    Node* next;
    Node* prev;

    Node(QueueElement value) : data(value), next(nullptr), prev(nullptr) {}
};

// Kelas kuewe implementasi dr dll untuk antrian
class Queue {
private:
    Node* front;
    Node* rear;
    int size;
    int maxSize;

public:
    Queue(int max) : front(nullptr), rear(nullptr), size(0), maxSize(max) {}

    ~Queue() {
        while (front != nullptr) {
            dequeue();
        }
    }

    bool isFull() {
        return size == maxSize;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(QueueElement value) {
        if (isFull()) {
            cout << "[!] antrian penuh" << value << endl;
            return;
        }

        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "[!] antrian kosong" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        if (front != nullptr) {
            front->prev = nullptr;
        } else {
            rear = nullptr;
        }
        delete temp;
        size--;
    }

    void insertAfter(QueueElement value, QueueElement afterValue) {
        Node* current = front;
        while (current && current->data != afterValue) {
            current = current->next;
        }
        if (current) {
            Node* newNode = new Node(value);
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next) {
                current->next->prev = newNode;
            } else {
                rear = newNode;
            }
            current->next = newNode;
            size++;
        } else {
            cout << "[!] Element " << afterValue << " gaada diantrian ngaf." << endl;
        }
    }


    void displayQueue() {
        Node* current = front;
        while (current != nullptr) {
            cout << "[+]" << current->data << " (pointer address: " << current << ") " << endl;
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q(10); // antrian max di 10
    string input;
    char choice;

    // bikin antrian
    q.enqueue("a");
    q.enqueue("b");
    q.enqueue("c");
    cout << "[*] antrian awal: " << endl;
    q.displayQueue();

    // d nyelak antrian b sm c
    q.insertAfter("d", "a");
    cout << "[*] antrian setelah d nyelak antrian: " << endl;
    q.displayQueue();

    // antrian jalan
    q.dequeue();
    cout << "[*] antrian setelah eksekusi: " << endl;
    q.displayQueue();

    // input dinamis biar bisa nambah data
    char user;
    cout << "[?] nambah antrian ga ngaf(y/n): ";
        cin >> user;
    if(user == 'y' || user == 'Y'){
        do {
            cout << "[+] Masukkin elemen buat enqueue: ";
            cin >> input;
            q.enqueue(input);
            cout << "[!] Antrian setelah ditambahkan: ";
            q.displayQueue();
            cout << "[?] nambah antrian ga ngaf(y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }
    cout << "Queue final: ";
    q.displayQueue();
    return 0;
}
