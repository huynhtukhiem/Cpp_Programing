# Định nghĩa

Trong C++, mỗi một biến sẽ có 2 thành phần chính: **tên biến** và **kiểu dữ liệu** của biến đó.  

Ví dụ về kiểu dữ liệu cơ bản:  
- `int`: số nguyên  
- `float`: số thực  
- `string`: chuỗi ký tự  

---

## Struct là gì?

`struct` là một **kiểu dữ liệu** do người lập trình định nghĩa, dùng để **gom nhiều biến có liên quan lại với nhau thành một nhóm**.  

### Ví dụ minh họa  

Đối với một đối tượng **Sinh viên**, ta cần lưu trữ nhiều thông tin như:  
- Tên  
- Tuổi  
- Giới tính  
- Điểm trung bình  
- ...  

Nếu không dùng `struct`, khi có nhiều sinh viên ta phải khai báo từng biến riêng lẻ cho từng sinh viên:  
- Sinh viên A có biến `ten_A`, `tuoi_A`, `diem_A`...  
- Sinh viên B lại có biến `ten_B`, `tuoi_B`, `diem_B`...  

=> Điều này rất rườm rà và khó quản lý.  

---

## Cách giải quyết bằng struct  

Thay vì khai báo rời rạc, ta có thể nhóm các biến trên lại trong một `struct` gọi là **Sinh_vien**.  

Khi đó, mỗi sinh viên sẽ được biểu diễn bởi một biến kiểu `Sinh_vien`, và ta chỉ cần thay đổi dữ liệu của biến đó là đủ.  

Điều này giúp:  
- Quản lý dữ liệu gọn gàng hơn  
- Tránh lặp lại nhiều khai báo dư thừa  
- Dễ dàng mở rộng, truy cập, bổ sung thêm thông tin khi cần

---
# Những kiến thức và lộ trình xoay quanh struct trong C++
1. Thành thạo các khai báo 1 struct, dùng typedef để code đơn giản hơn
2. Biết cách truy cập vào một thành phần trong struct
3. Sử dụng struct kết hợp với hàm
4. Sử dụng cơ bản con trỏ để thay đổi giá trị thành phần trong struct
5. struct lồng struct
---   
© 2025 HuynhTu Khiem. All rights reserved.
