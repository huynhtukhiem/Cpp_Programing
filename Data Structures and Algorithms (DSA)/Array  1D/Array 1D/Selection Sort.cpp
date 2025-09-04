#include<iostream>
using namespace std;
void Nhapmang(int n, int *a){
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> *(a+i);
    }
}
void Inmang(int n, int *a){
    for(int i = 0; i< n; i++){
        cout << *(a+i) << " ";
    }
}
void Selection_Sort(int n, int *a){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(*(a+min) > *(a+j)){ 
                min = j;
            }
        }
        if(min != i){
            int temp = *(a+i);
            *(a+i) = *(a+min);
            *(a+min) = temp;
        }
    }
}
int main(){
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;
    int a[n];
    Nhapmang(n,a);
    cout << "Mang ban dau la: ";
    Inmang(n,a);
    cout << endl;
    cout << "Mang sau khi sap xep: ";
    Selection_Sort(n,a);
    Inmang(n,a);
    return 0;
}
