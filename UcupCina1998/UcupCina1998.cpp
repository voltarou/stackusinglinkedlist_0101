#include <iostream>
using namespace std;


class Node {
public :
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

class stack {
private :
    Node* top;

public:
    stack() {
        top = NULL;
    }
};

int push(int value) {
    Node* top;
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Push value:" << value << endl;
    return value;
}

void pop() {
    if (isEmpty()) {
        cout << "stack is Empty." << endl;
    }
    cout << "Popped value:" << top->data << endl;
    top = top->next;
}
int main()
{
    
}

 
