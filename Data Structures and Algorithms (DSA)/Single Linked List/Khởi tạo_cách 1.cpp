#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void Chen_node(Node*& head, int value){
    Node* Node_moi = new Node{value, nullptr};
    if(head == nullptr){
        head = Node_moi;
    }
    else{
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = Node_moi;
    }
}
void PrintList(Node* head){
    cout << "Danh sach lien ket: ";
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void FreeList(Node*& head){
    Node* temp;
    while(head != nullptr){
        temp = head;
        head = head->next;
        delete temp;
    }
}
int main(){
    Node* head = nullptr;
    int n, value;
    cout << "Nhap kich thuoc danh sach lien ket: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> value;
        Chen_node(head, value);
    }
    PrintList(head);
    FreeList(head);
    return 0;
}
