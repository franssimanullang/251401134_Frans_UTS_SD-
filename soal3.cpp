#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main (){
    system("clear");
    Node* front = nullptr;

    // push
    Node* node1 = new Node();
    node1->data = 10;
    node1->next = front;
    front = node1;
    Node* rear = nullptr;

    Node* node2 = new Node();
    node2->data = 20;
    node2->next = rear;
    rear ->next=nullptr;

    Node* node3 = new Node();
    node3->data = 20;
    node3->next = rear;
    rear ->next=nullptr;

    // tampilkan
    Node* temp = front;
    cout << "Isi queue : ";
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;

    //front
    cout << "Front : " << front->data << endl;

    //size
    int size = 0;
    temp = front;

    while(temp!=nullptr){
        size++;
        temp = temp->next;
    }
    cout << "Size: " << size << endl;

    // empty
    if(front==nullptr)
        cout << "Queue kosong" << endl;
    else
        cout << "Queue tidak kosong" << endl;

    while(temp!=nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}