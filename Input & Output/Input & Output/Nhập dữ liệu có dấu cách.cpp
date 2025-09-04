// Nhập vào một đoạn văn bản bao gồm cả các kí tự dấu cách
#include<iostream>
using namespace std;
int main(){
    string hoten; // string là kiểu dữ liệu chuỗi trong C++ ( giống char hoten[] trong C)
    cout << "Nhap ho va ten cua ban: ";
    getline(cin,hoten); // Nhập cả dòng kể cả dấu cách 
    cout << "Xin chao " << hoten << endl;
    return 0;
}
