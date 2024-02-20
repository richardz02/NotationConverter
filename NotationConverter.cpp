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
        size_t size();
};

/* Implementing fucntion definitons */

void Deque::push_front(const std::string& val) {
    
}

void Deque::push_back(const std::string& val) {

}

std::string Deque::pop_front() {

}

std::string Deque::pop_back() {

}

std::string Deque::front() {

}

std::string Deque::back() {

}

bool Deque::isEmpty() {

}

size_t Deque::size() {

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
