#include <iostream>
#include <string>

using namespace std;

string multiply(string num1, string num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0) return "0";

    // tạo một mảng để lưu kết quả của phép nhân
    // có thể có độ dài tối đa là n1 + n2
    int result[n1 + n2] = {0};

    // chỉ số để duyệt qua các chữ số của num1 và num2
    int i_n1 = 0;
    int i_n2 = 0;

    // đi từ cuối chuỗi num1 đến đầu chuỗi num1
    for (int i = n1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1_digit = num1[i] - '0';

        // reset lại chỉ số của num2 về đầu chuỗi
        i_n2 = 0;

        // đi từ cuối chuỗi num2 đến đầu chuỗi num2
        for (int j = n2 - 1; j >= 0; j--) {
            int n2_digit = num2[j] - '0';

            // nhân hai chữ số và cộng vào vị trí tương ứng trong mảng kết quả
            int sum = n1_digit * n2_digit + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // nếu có carry còn lại, cộng vào vị trí tiếp theo trong mảng kết quả
        if (carry > 0) {
            result[i_n1 + i_n2] += carry;
        }

        i_n1++;
    }

    // xác định độ dài thực sự của mảng kết quả
    int i = n1 + n2 - 1;
    while (i >= 0 && result[i] == 0) {
        i--;
    }
    if (i == -1) return "0";

    // tạo một chuỗi từ mảng kết quả và trả về
    string s = "";
    while (i >= 0) {
        s += to_string(result[i--]);
    }

    return s;
}

int main() {
    string num1 = "9";
    string num2 = "21";
    cout << multiply(num1, num2) << endl; // kết quả: 121932631137021795
    return 0;
}
