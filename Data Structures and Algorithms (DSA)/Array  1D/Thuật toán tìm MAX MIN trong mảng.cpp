#include <iostream>
using namespace std;

/// Hàm nhập phần tử của mảng 
void Nhapmang(int n, int a[]){
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i + 1 << " cua mang: ";
        cin >> a[i];
    }
}

// Hàm in ra phần tử của mảng
void Inmang(int n, int a[]){
    cout << "Mang: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// Hàm tìm phần tử lớn nhất và nhỏ nhất của mảng
void Tim_MAXMIN(int n, int a[]){
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    cout << max << " " << min;
}

int main(){
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    int a[1000]; // trong C++ không nên dùng VLA, khai báo mảng lớn trước
    Nhapmang(n, a);
    Inmang(n, a);

    cout << "Phan tu lon nhat va nho nhat trong mang la: ";
    Tim_MAXMIN(n, a);

    return 0;
}
