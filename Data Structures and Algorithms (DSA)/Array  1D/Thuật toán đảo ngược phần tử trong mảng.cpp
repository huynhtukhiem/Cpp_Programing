#include <iostream>
using namespace std;

// Hàm nhập mảng
void Nhapmang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

// Hàm in mảng
void Inmang(int n, int a[]) {
    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Hàm đảo ngược mảng (thuật toán tối ưu nhất)
void ReverseArray(int n, int a[]) {
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main() {
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    int a[100]; // Giới hạn mảng tĩnh trong C++
    Nhapmang(n, a);

    cout << "Mang ban dau: ";
    Inmang(n, a);

    ReverseArray(n, a);

    cout << "Mang sau khi dao nguoc: ";
    Inmang(n, a);

    return 0;
}
