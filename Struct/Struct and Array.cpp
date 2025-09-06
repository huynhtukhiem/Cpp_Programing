// Viết một chương trình tạo danh sách sinh viên với 3 thành phần là tên, tuổi, điểm
#include<iostream>
#include<string>
using namespace std;
// Định nghĩa các thành phần của 1 Sinh viên: 
struct Sinhvien{
    string name; 
    int age;
    float score;
};
// Hàm nhập các thông tin cho 1 sinh viên
void Information(Sinhvien &sv){
    cout << "Nhap ten sinh vien: ";
    getline(cin, sv.name);
   
    
    cout << "Nhap tuoi sinh vien: ";
    cin >> sv.age;

    cout << "Nhap diem trung binh: "; 
    cin >> sv.score;
    cin.ignore(); // Trước khi nhập tên thì dùng cin.ignore()
}

// Hàm nhập nhiều sinh viên
void Input(Sinhvien sv[], int n){
// Giống như void Nhapmang(int n, int a[]}
    cout << "------Nhap thong tin sinh vien------" << endl;
    for(int i = 0; i < n; i++){
        cout << "Nhap thong tin sinh vien thu " << i+1 << ": " << endl;
        Information(sv[i]);
    }
}

// Hàm in ra thông tin sinh viên
void Output(Sinhvien sv[], int n){
    cout << "----Thong tin sinh vien-----" << endl;
    for(int i = 0; i < n; i++){
        cout << "Sinh vien " << i+1 << endl;
        cout << "Ten: " << sv[i].name << endl; 
        cout << "Tuoi: "<< sv[i].age << endl;
        cout << "Diem trung binh: "<< sv[i].score << endl;
        // Hàm in ra thông tin cụ thể của từng sinh viên trong mảng sinh viên (danh_sach[10]) 
    }
}
int main(){
    Sinhvien danh_sach[10]; // Sinhvien là kiểu dữ liệu do ta định nghĩa, danh_sach là một mảng chứ tối đa 10 phần tử
                            //với mỗi phần tử sẽ có cấu trúc 3 thành phần như ta định nghĩa
    int n;
    cout << "Nhap so luong sinh vien trong lop: ";
    cin >> n;
    cin.ignore();  // Trước khi nhập tên thì dùng ignore()
    Input(danh_sach,n);
    Output(danh_sach,n);
    return 0;
}
