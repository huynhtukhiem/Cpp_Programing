// Viết chương trình nhập địa chỉ của sinh viên dùng 2 struct lồng nhau
#include<iostream>
#include<string>
using namespace std;
struct Address{
    string country;
    string city;
    string district;
};

struct Sinhvien{
    string name;
    Address dia_chi; // Không khai báo trong hàm main mà khai báo trong struct chính
};

void Information(Sinhvien &sv){
    cout << "Nhap ten sinh vien: " << sv.name;
    getline(cin, sv.name);

    cout << "Nhap dia chi sinh vien: " << endl;
    cout << "Nhap Thanh pho: ";
    getline(cin, sv.dia_chi.city); // Cú pháp truy cập vào thành phần của struct lồng struct

    cout << "Nhap quan: ";
    getline(cin, sv.dia_chi.district);
}

void Print(Sinhvien sv){
    cout << "Sinh vien: " << sv.name << endl;
    cout << "Dia chi: " << sv.dia_chi.city << ", " << sv.dia_chi.district;
}


int main(){
    Sinhvien sv;
    cout << "Nhap thong tin sinh vien" << endl;
    Information(sv);
    Print(sv);

    return 0;
}
