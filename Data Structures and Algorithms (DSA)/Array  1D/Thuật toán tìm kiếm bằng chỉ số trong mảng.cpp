#include <iostream>
using namespace std;

// Hàm nhập mảng
void Nhapmang(int n, int a[]){
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

// Hàm in mảng
void Inmang(int n, int a[]){
    cout << "Mang: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// Hàm tìm kiếm bằng chỉ số trong mảng
void Timkiem(int n, int a[], int index){
    if (index >= 0 && index < n) { // kiểm tra chỉ số hợp lệ
        cout << "Phan tu tai vi tri " << index << " la: " << a[index] << endl;
    } else{
        cout << "Chi so khong hop le!!" << endl;
    }
}

int main(){
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    int a[100]; // Giới hạn mảng tĩnh, tối đa 100 phần tử
    Nhapmang(n, a);
    Inmang(n, a);

    int index;
    cout << "Nhap vi tri can tim trong mang: ";
    cin >> index;
    Timkiem(n, a, index);

    return 0;
}
