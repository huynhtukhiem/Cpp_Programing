// Các thư viện quan trọng khi làm việc với string (chuỗi)
```
#include<iostrean>
#include<string>
#include<cctpye>
```

* getline(cin, string) thuộc thư viện iostream:
Nhập vào chuỗi chứa dấu cách, dừng lại khi gặp dấu enter

* cin.ignore() thuộc thư viện iostream:
Xóa dấu \n, thường được dùng trước getline()

* isspace(char) thuộc thư viện cctpye:
Kiểm tra xem kí tự đó có phải là khoảng trắng hay không và trả về kết quả là khác 0 (true) nếu là khoảng trắng hoặc 0 (false) nếu không phải khoảng trắng

* char.empty() thuộc thư viện string: Kiểm tra xem chuỗi có rỗng hay không, nếu có trả về true, nếu không trả về false

* char.length() hoặc char.size() thuộc thư viện string: Trả về kết quả là số kí tự của chuỗi, bao gồm cả dấu cách nếu có

* tolower(string), toupper(string) thuộc thư viện cctype:
Viết hoa, viết thường kí tự

