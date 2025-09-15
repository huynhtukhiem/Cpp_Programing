# Cấu trúc đơn giản của một project
<img width="283" height="354" alt="image" src="https://github.com/user-attachments/assets/b9cc41f3-6239-4565-be0b-e58d9263692d" />

```
untitled2
 ├── CMakeLists.txt
 ├── untitled2.pro (hoặc CMake project)
 ├── Forms
 │    └── mainwindow.ui
 ├── Header Files
 │    └── mainwindow.h
 └── Source Files
      ├── main.cpp
      └── mainwindow.cpp
```

# Ý nghĩa của từng folder/file
 - untitled2: folder chính, chứa toàn bộ dự án

 - CMakeLists.txt: File cấu hình build cho CMake. Nó nói cho compiler biết project có file nào, dùng Qt module nào (Widgets, Core…), output ra exe như thế nào.

 - mainwindow.ui: Đây là file giao diện, được thiết kế bằng Qt Designer (kéo thả button, label, textbox…).Qt sẽ tự sinh ra file ui_mainwindow.h khi build, để ánh xạ giao diện vào code C++.

 - mainwindow.h: Khai báo class MainWindow (kế thừa QMainWindow). Ở đây định nghĩa các hàm, biến thành viên, và có một con trỏ Ui::MainWindow *ui; để liên kết với mainwindow.ui.

 - mainwindow.cpp: Định nghĩa constructor/destructor cho class MainWindow. Gọi ui->setupUi(this); để nạp giao diện từ file .ui. Ta viết code xử lý sự kiện ở đây (ví dụ nhấn nút thì hiện thông báo).

 - mainwindow.cpp: Đây là điểm bắt đầu chương trình, ta sẽ viết code để điều khiển logic chương trình tại đây.
