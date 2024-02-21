#include "NotationConverter.hpp"

// Define structure for node
struct Node {
    std::string data;
    Node* prev;
    Node* next;
    Node(const std::string& d) : data(d), prev(nullptr), next(nullptr) {}
};

// Define Deque class
class Deque {
    private:
        Node* head;
        Node* tail;
        size_t size;
    public:
        Deque() : head(nullptr), tail(nullptr), size(0) {}
        ~Deque();

        void push_front(const std::string& val);
        void push_back(const std::string& val);
        std::string pop_front();
        std::string pop_back();
        std::string front();
        std::string back();
        bool isEmpty();
        size_t deque_size();
};

/* Implementing fucntion definitons */

void Deque::push_front(const std::string& val) {
    // Create new node to be added
    Node* newNode = new Node(val);

    // If head is null, make new node the head;
    // Otherwise insert new node in front of head
    if (!head) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Increase size by 1
    size++;
}

void Deque::push_back(const std::string& val) {
    // Create new node to be added 
    Node* newNode = new Node(val);

    // If the linked list is null, make head the new node
    if (!head) {
        head = newNode;
        tail = newNode;
    }

    // Insert the new node after tail and make tail the new node
    Node* current = tail;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

    // Increase size by 1
    size++;
}

std::string Deque::pop_front() {
    // If linked list does not exist, simply return
    if (!head) {
        return;
    }

    // Get the data from the head node
    Node* current = head;
    std::string data = head->data;

    // Remove head node
    head = current->next;
    head->prev = nullptr;
    delete current;

    // Decrease size by 1
    size--;

    return data;
}

std::string Deque::pop_back() {
    // If linked list doesn't exist, simply return 
    if (!head) {
        return;
    }

    // Get the data from the tail node
    Node* current = tail;
    std::string data = tail->data;

    // Remove the tail node
    tail = current->prev;
    tail->next = nullptr;
    delete tail;

    // Decrease size by 1
    size--;

    return data;
}

std::string Deque::front() {
    // If the deque is empty return error message
    if (!head) {
        return "Deque is empty";
    }

    // Return head node's data
    return head->data;
}

std::string Deque::back() {
    // If the deque is empty return error message
    if (!head) {
        return "Deque is empty";
    }

    // Return tail node's data
    return tail->data;
}

bool Deque::isEmpty() {
    // Return true if the deque is empty
    return head == nullptr;
}

size_t Deque::deque_size() {
    int count = 0;

    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }

    return count;
}

class NotationConverter : public NotationConverterInterface {
public:
    std::string postfixToInfix(std::string inStr) override {

    }

    std::string postfixToPrefix(std::string inStr) override {
        
    }

    std::string infixToPostfix(std::string inStr) override {
        
    }

    std::string infixToPrefix(std::string inStr) override {
       
    }

    std::string prefixToInfix(std::string inStr) override {
   
    }

    std::string prefixToPostfix(std::string inStr) override {
        
    }
};
