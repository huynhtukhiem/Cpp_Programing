// Làm tròn n chữ số thập phân sau dấu phẩy
#include<iostream> // Thư viện dùng để nhập, xuất
#include<iomanip> // Thư viện dùng để điều chỉnh dữ liệu nhập, xuất sao cho phù hợp
using namespace std;
int main(){
    double pi = 3.14159364235323425;
    cout << "So pi la: \n";
    cout << fixed << "Lam tron 2 chu so: " << setprecision(2) << pi << endl; // Cú pháp chuẩn để làm tròn số
    cout << fixed << "Lam tron 4 chu so: " << setprecision(4) << pi << endl;
    // setprecision(n) là hàm dùng để làm tròn n chữ số sau dấu phẩy theo quy tắc toán học 
    // fixed dùng để làm tròn số nếu không có fixed thì số sau khi làm tròn sẽ hiển thị theo dạng toán học VD: 3.14e41431 v.v  
   double n;
    cout << "Nhap mot so le: ";
    cin >> n;
    cout << fixed << "Lam tron 3 chu so: " << setprecision(3) << n << endl;
    return 0;
}
