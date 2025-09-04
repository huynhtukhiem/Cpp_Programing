#include<iostream> // Thư viện dùng để nhập xuất dữ liệu
using namespace std; // Làm cho code ngắn gọn hơn thay vì dùng std::cout hoặc std::cin
// Các dự án lớn thường dùng: std::cout và std::cin mà không dùng toàn bộ namespace std
int main(){
    int tuoi;
    cout << "Nhap tuoi cua ban: "; // Cú pháp in ra màn hình 
// toán tử << dùng để đẩy dữ liệu ra màn hình
    cin >> tuoi; // Cú pháp nhập vào một từ
// toán tử >> dùng để lấy dữ liệu từ bàn phím và gán vào biến 
    cout << "Tuoi cua ban la: " << tuoi << endl; // endl là xuống dòng và xóa bộ nhớ đệm
    return 0; // Chương trình kết thúc thành công
}

