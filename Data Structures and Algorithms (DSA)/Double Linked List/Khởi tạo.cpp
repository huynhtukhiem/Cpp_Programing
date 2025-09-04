#include<iostream>
using namespace std;
// Bước 1: Định nghĩa cấu trúc một node gồm: giá trị, con trỏ trước, con trỏ sau
struct Node{
    int data; // Giá trị của node 
    struct Node* prev; // Con trỏ trỏ về node trước nó
    struct Node* next; // Con trỏ trỏ về node sau nó

};
// Bước 2: Hàm tạo một node
struct Node* Tao_node(int value){
    struct Node* Node_moi = new Node(); // Cấp phát động
    if(Node_moi == nullptr){
        cout << "Loi bo nho!!" << endl;
        exit(1);
    }
    Node_moi->data = value; // Giá trị ban đầu của node là NULL
    Node_moi->prev = nullptr; // Giá trị ban đầu của node trước là null
    Node_moi->next = nullptr; // Giá trị ban đầu của node sau là null
    return Node_moi; // Trả về giá trị Node_moi để tính toán
}
// Bước 3: Chèn node mới cuối danh sách
void Chen_node(struct Node** head, int value){
    struct Node* Node_moi = Tao_node(value);
    if(*head == nullptr){
        *head = Node_moi;
        return;
    }
    struct Node* temp = *head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = Node_moi;
    Node_moi->prev = temp; // Liên kết node trước với node sau**
}
// Bước 4: In danh sách chiều thuận và chiều nghich
void PrintList(struct Node* head){
    struct Node* tail = nullptr; // Lưu node cuối cùng của danh sách khi duyệt từ đầu 
    cout << "Danh sach theo chieu thuan: ";
    while(head != nullptr){
        cout << head->data << " -> ";
        tail = head;
        head = head->next; // di chuyển đến node sau
    }
    cout << "NULL" << endl;
    cout << "Danh sach theo chieu nghich: ";
    while(tail != nullptr){
        cout << tail->data << " -> "; 
        tail = tail->prev;  // di chuyển ngược về node trước
    }
    cout << "NULL" << endl;
}
// Bước 5: Giải phóng bộ nhớ
void FreeList(struct Node* head){
    struct Node* temp;
    while(head != nullptr){
        temp = head;
        head = head->next;
        delete temp;
    }
}
// Bước 7: hàm main chính
int main(){
    struct Node* head = nullptr; // ban đầu node đầu tiên là null
    int n, value;
    cout << "Nhap kich thuoc danh sach: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> value;
        Chen_node(&head, value);
    }
    PrintList(head);
    FreeList(head);
    return 0;
}
