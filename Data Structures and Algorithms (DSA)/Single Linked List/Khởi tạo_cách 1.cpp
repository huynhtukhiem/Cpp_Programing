// Tạo một single linked list
/*
    2 công đoạn quan trọng khi tạo một linked list: 
- Node đó gồm: giá trị, con trỏ trỏ đến node tiếp
- Xếp node đó vào đâu: đầu, cuối, vị trí bất kì
*/
#include<iostream>
using namespace std;

// Bước 1: Định nghĩa cấu trúc của một node
struct Node {
    int data;          // Giá trị của node
    struct Node* next; // Con trỏ trỏ đến node tiếp theo
}; 

// Bước 2: Hàm tạo một node mới
struct Node* Tao_node(int value) {
    Node* Node_moi = new Node(); // Cấp phát bộ nhớ động cho node
    Node_moi->data = value; // Giá trị của node là value do người dùng nhập
    Node_moi->next = nullptr; // Node mới chưa liên kết với node nào nên trỏ tới null
    return Node_moi; // trả về Node_moi để thao tác các bước tiếp theo
}

// Bước 3: Hàm chèn node vào cuối danh sách
void Chen_node(struct Node** head, int value) {
    Node* Node_moi = Tao_node(value);
    if (*head == nullptr) { // nếu danh sách rỗng
        *head = Node_moi;   // thì node đầu là node mới
        return;
    }
    Node* temp = *head;
    while (temp->next != nullptr) { 
        temp = temp->next;
    }
    temp->next = Node_moi;
}

// Bước 4: In danh sách
void PrintList(struct Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Bước 5: Giải phóng bộ nhớ
void FreeList(struct Node* &head) {
    struct Node* temp;
    while (head != nullptr) {
        temp = head;        // giữ lại node hiện tại
        head = head->next;  // sang node kế tiếp
        delete temp;        // giải phóng node hiện tại
    }
}

int main() {
    struct Node* head = nullptr; // Cho danh sách ban đầu rỗng
    int n, value;
    cout << "Nhap kich thuoc danh sach: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> value;
        Chen_node(&head, value); // phần tử mới thêm vào sẽ để ở cuối
        // sau đó phần tử tiếp theo sẽ chèn ở sau phần tử đó
    }
    PrintList(head);
    FreeList(head);
    return 0;
}
