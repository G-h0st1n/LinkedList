#include <iostream>


using namespace std;

struct Node {
    int data;
    Node* next;
};


void addNode(Node* &head, int value) {
    Node* newNode = new Node();
    newNode ->data = value;
    newNode ->next = nullptr;

    if(head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;

        while(temp->next != nullptr) {
            temp = temp ->next;
        }
        temp ->next= newNode; //
    }
}

void showList(Node* head) {
    Node* temp = head;
    while (temp !=nullptr) {
        cout<< temp->data << "->" <<endl;
        temp= temp ->next;
    }
}

int main()
{

    Node* list = nullptr;
    addNode(list, 40);
    addNode(list, 10);
    addNode(list, 890);

    cout << "lista de valores: " << endl;
    showList(list);


    return 0;
}
