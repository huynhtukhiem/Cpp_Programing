#include<iostream>   // Thư viện nhập xuất cơ bản (cin, cout)
using namespace std; // Dùng không gian tên std để không phải viết std::cin, std::cout

// Định nghĩa cấu trúc Node cho danh sách liên kết đơn
struct Node{
    int data;   // Giá trị (dữ liệu) của node
    Node* next; // Con trỏ trỏ tới node tiếp theo
};

// Hàm chèn node vào cuối danh sách
void Chen_node(Node*& head, int value){
    Node* Node_moi = new Node{value, nullptr}; // Cấp phát node mới, dữ liệu = value, trỏ next = nullptr
    if(head == nullptr){  // Nếu danh sách rỗng
        head = Node_moi;  // Node mới sẽ là node đầu tiên
    }
    else{                 // Nếu danh sách không rỗng
        Node* temp = head;           // Bắt đầu từ node đầu tiên
        while(temp->next != nullptr){ // Duyệt đến node cuối cùng
            temp = temp->next;
        }
        temp->next = Node_moi;        // Gắn node mới vào cuối
    }
}

// Hàm in toàn bộ danh sách liên kết
void PrintList(Node* head){
    cout << "Danh sach lien ket: ";
    Node* temp = head;             // Tạo con trỏ tạm để duyệt danh sách
    while(temp != nullptr){        // Lặp cho đến khi hết danh sách
        cout << temp->data << " -> "; // In dữ liệu của node hiện tại
        temp = temp->next;            // Chuyển sang node tiếp theo
    }
    cout << "NULL" << endl;        // In NULL để biểu diễn cuối danh sách
}

// Hàm giải phóng bộ nhớ của toàn bộ danh sách
void FreeList(Node*& head) {
    Node* temp = head;                 // Bắt đầu từ node đầu
    while (temp != nullptr) {          // Khi chưa duyệt hết danh sách
        Node* nextNode = temp->next;   // Lưu lại con trỏ node kế tiếp
        delete temp;                   // Giải phóng node hiện tại
        temp = nextNode;               // Di chuyển sang node kế tiếp
    }
    head = nullptr;  // Sau khi xóa hết, gán head = nullptr (tránh con trỏ treo)
}

int main(){
    Node* head = nullptr;             // Khởi tạo danh sách rỗng
    int n, value;                     // n = số phần tử, value = giá trị từng phần tử
    cout << "Nhap kich thuoc danh sach lien ket: ";
    cin >> n;                         // Nhập số lượng node từ người dùng
    for(int i = 0; i < n; i++){       // Vòng lặp nhập từng phần tử
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> value;                 // Nhập giá trị
        Chen_node(head, value);       // Thêm node chứa giá trị vào danh sách
    }
    PrintList(head);                  // In danh sách ra màn hình
    FreeList(head);                   // Giải phóng bộ nhớ danh sách
    return 0;                         //
