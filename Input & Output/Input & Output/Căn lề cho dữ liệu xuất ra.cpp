#include<iostream> // Thư viện dùng để nhập, xuất
#include<iomanip> // Thư viện dùng để điều chỉnh dữ liệu nhập, xuất sao cho phù hợp
using namespace std;
int main(){
    string name1 = "Huynh";
    string name2 = "Tu";
    string name3 = "Khiem";
    cout << right << setw(10) << name1 << endl;// Cú pháp căn lề phải 10 kí tự
    cout << left << setw(10) << name2 << endl;// Cú pháp căn lề trái 10 kí tự (= mặc định)
    cout << setw(10) << name1 << endl; // Đặt số kí tự cho name1 là 10 + "Huynh" = 15 tương đương với right 
    return 0;
}
