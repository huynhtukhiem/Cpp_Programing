#include<iostream>
using namespace std;
void Nhapmang(int n, int a[]){
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];
    }
}
void Inmang(int n, int a[]){
    cout << "Mang ban dau: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int Tinh_tong(int n, int a[]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
int Tinh_tich(int n, int a[]){
    int multi = 1;
    for(int i = 0; i < n; i++){
        multi *= a[i];
    }
    return multi;
}
int main(){
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;
    int a[n];
    Nhapmang(n,a);
    Inmang(n,a);
    cout << "Tong cac phan tu trong mang: " << Tinh_tong(n,a) << endl;
    cout << "Tich cac phan tu trong mang: " << Tinh_tich(n,a) << endl;


    return 0;
}
