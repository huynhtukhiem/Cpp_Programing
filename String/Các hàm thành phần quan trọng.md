// Các thư viện quan trọng khi làm việc với string (chuỗi)
```
#include<iostrean>
#include<string>
#include<cctpye>
```

* getline(cin, string), thư viện iostream:
Nhập vào chuỗi chứa dấu cách, dừng lại khi gặp dấu enter

* cin.ignore(), thư viện iostream:
Xóa dấu \n, thường được dùng trước getline()

* isspace(char), thư viện cctpye:
Kiểm tra xem kí tự đó có phải là khoảng trắng hay không và trả về kết quả là khác 0 (true) nếu là khoảng trắng hoặc 0 (false) nếu không phải khoảng trắng

* string.length(), thư viện string: Trả về kết quả là số kí tự của chuỗi, bao gồm cả dấu cách nếu có

* tolower(string), toupper(string), thư viện cctype:
Viết hoa, viết thường kí tự
