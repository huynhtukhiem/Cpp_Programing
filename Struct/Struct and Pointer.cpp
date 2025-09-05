#include<iostream>
#include<string>
using namespace std;
struct Sinh_vien{
    int age = 19;
    string name = "Huynh Tu Khiem";
    float score = 2.0;
};
// Truyền struct vào hàm để in ra thông tin trong struct 
void Print_information(Sinh_vien sv){
// Sinh_vien sv là tham số của hàm Print_information, với sv là biến còn Sinh_vien là kiểu dữ liệu của biến
    cout << "Student's name: " << sv.name << endl; // nếu không truyển tham số Sinh_vien sv thì không hiểu sv.name là cái gì, lấy từ đâu
    cout << "Student's age: " << sv.age << endl; // tương tự với sv.age
    cout << "Student's score: " << sv.score << endl; // tương tự với sv.score
}

// Truyền hàm bằng tham chiếu & để thay đổi thông tin thành phần trong struct
void Change_information(Sinh_vien &sv){
    cout << "Nhap ten moi: ";
    getline(cin, sv.name);

    cout << "Nhap diem moi: ";
    cin >> sv.score;

}

int main(){
    Sinh_vien sv;
    cout << "Thong tin sinh vien ban dau: " << endl;
    Print_information(sv); // truyền tham số trong hàm main
// Đổi thông tin trong struct bằng hàm truyền tham chiếu

    Change_information(sv);
    cout << "Thong tin sinh vien sau khi cap nhat: " << endl;
    Print_information(sv);
    return 0;
}
