// Thành thạo thao tác khai báo một struct, truy cập, thay đổi giá trị thành phần trong struct
#include<iostream>
#include<string>
using namespace std;
// Khai báo một struct Sinh viên
struct Sinh_vien{
    int birth = 2006;
    int age; // biến tuổi có thể thay đổi theo thời gian
    float score; // biến điểm không cố định, có thể thay đổi
    string name = "Huynh Tu Khiem";
    char gender = 'M';
};
int main(){
    Sinh_vien sv1; // Khai báo struct Sinh_vien trong hàm main
/* 
    Lúc này Sinh_vien là một kiểu dữ liệu (giống int, float,..) do bạn tạo ra, nó gom nhiều kiểu dữ liệu khác nhau thành một nhóm
    sv1 là tên biến có kiểu dữ liệu là Sinh_vien
    Ví dụ mảng chứa các phần tử chung một kiểu dữ liệu: a[] = {1,2,3}; 1 2 3 đều là số nguyên
    Còn sv1 = {int, float, string, char}; các kiểu dữ liệu khác nhau
    Nói đơn giản: Sinh_vien lúc này như là một mảng nhưng các phần tử của nó các kiểu dữ liệu do bạn định nghĩa chứ không phải số nguyên nữa
*/ 

    // Truy cập vào phần tử trong struct
    cout << "Student's name: " << sv1.name << endl;
    cout << "Student's gender: " << sv1.gender << endl;
    cout << "Student's birth: " << sv1.birth << endl;
    //sv1 là biến, .name là thành phần (thuộc tính) bên trong struct Sinh_vien
    //sv1.name: giá trị của thành phần (thuộc tính) name của sv1 = "Huynh Tu Khiem"

    // Thay đổi giá trị của thành phần (thuộc tính)
    sv1.age = 19; 
    sv1.score = 3.9;
    cout << "Student's age: " << sv1.age << endl;  
    cout << "Student's score: " << sv1.score << endl;
    sv1.gender = 'F';
    cout << "Student's gender after: " << sv1.gender << endl;



    return 0;
}
