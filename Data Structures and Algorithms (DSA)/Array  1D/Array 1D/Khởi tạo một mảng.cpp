// Khởi tạo một array 1 chiều và in ra các phần tử trong mảng đó
// Mảng tĩnh là mảng có kích thước cố định 
// Mảng động là mảng có kích thước do người dùng chọn 
#include<iostream>
using namespace std;
void Nhapmang(int n, int a[]){
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> *(a+i);
    }
}
void Inmang(int n, int a[]){
    cout << "Mang: ";
    for(int i = 0; i < n; i++){
        cout << *(a+i) << " ";
    }
}
int main(){
    // Cách 1: Mảng với giá trị phần tử cố định (Mảng tĩnh)
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    cout << "Mang a: ";
    for(int i = 0; i < 10; i++){
        cout << a[i] << " "; // In ra phần tử trong mảng
    }
    cout << endl;
    // Cách 2: Mảng với giá trị phần tử và kích thước do người dùng nhập vào (Mãng động)
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;
    int b[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": "; // In ra phần tử trong mảng
        cin >> a[i];
    }
    cout << "Mang: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // Cách 3: Dùng hàm để thay cho cách 2, mục đích: tái sử dụng (Mảng động)
    int m;
    cout << "Nhap kich thuoc mang: ";
    cin >> m;
    int c[m];
    Nhapmang(m,c);
    Inmang(m,c);

    return 0;
}
