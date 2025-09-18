// Chuẩn hóa định dạng chuỗi theo ý muốn
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

// Hàm viết thường tất cả kí tự trong chuỗi
string Xu_ly_chuoi_1(string str){
    if(!str.empty()){ // Kiểm tra xem chuỗi có rỗng không để thao tác với các phần tử trong chuỗi
        for(size_t i = 0; i < str.length(); i++){
        // Hiểu đơn giản ta nên dùng size_t khi làm việc với chuỗi    
            str[i] = tolower(str[i]); // Viết thường tất cả kí tự
        }    
    }
    return str;
}

// Hàm viết hoa tất cả kí tự trong chuỗi
string Xu_ly_chuoi_2(string str){
    if(!str.empty()){
        for(size_t i = 0; i < str.length(); i++){
        // Hiểu đơn giản ta nên dùng size_t khi làm việc với chuỗi    
            str[i] = toupper(str[i]); // Viết hoa tất cả kí tự
        }    
    }
    return str;
}

// Hàm chuẩn hóa chuỗi về: Kí tự đầu viết thường và tất cả kí tự còn lại viết hoa
string Xu_ly_chuoi_3(string str){
    if(!str.empty()){ // Kiểm tra xem chuỗi có rỗng không?
        str[0] = toupper(str[0]); // Viết hoa kí tự đầu tiên
        for(size_t i = 1; i < str.length(); i++){
            // Hiểu đơn giản ta nên dùng size_t khi làm việc với chuỗi
            str[i] = tolower(str[i]); // Viết thường tất cả các kí tự còn lại
        }
    }
    return str; // Trả về chuỗi sau khi đã xử lý nếu có
}

// Hàm viết hoa kí tự đầu trong mỗi từ
string Xu_ly_chuoi_4(string str){
    bool viethoa = true; // Đánh dấu kí tự cần viết hoa sau khoảng trắng và cũng là kí tự đầu tiên
    for(size_t i = 0; i < str.length(); i++){
        if(isspace(str[i])){
            viethoa = true; // Nếu gặp khoảng trắng thì từ tiếp theo viết hoa
        }
        else{
            if(viethoa){
                str[i] = toupper(str[i]); // viết hoa kí tự đầu
                viethoa = false; // tắt đánh dấu, các từ còn lại viết thường
            }
            else{
                str[i] = tolower(str[i]);
            }
        }
    }
    return str;
}
int main(){
    string s;
    cout << "Nhap chuoi:";
    getline(cin,s); // Nhập vào một mảng có dấu cách
    cout << "Viet thuong tat ca ki tu: " << Xu_ly_chuoi_1(s) << endl;
    cout << "Viet hoa tat ca ki tu: " << Xu_ly_chuoi_2(s) << endl;
    cout << "Viet hoa ki tu dau: " << Xu_ly_chuoi_3(s) << endl;
    cout << "Viet hoa ki tu dau cua moi tu: " << Xu_ly_chuoi_4(s) << endl;
}

