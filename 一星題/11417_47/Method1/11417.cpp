#include<iostream>
using namespace std;

int GCD(int, int); // 自訂函數的原型宣告

int main() {
    int N, G; // 宣告整數變數 N 和 G
    while (cin >> N, N) { // 接收標準輸入至 N ，如果 N 為 0 則結束迴圈
        G = 0;
        for (int i = 1; i < N; i++) // 按照題目要求，使用雙迴圈給值
            for (int j = i + 1; j <= N; j++) {
                G += GCD(i, j); // 計算 i 與 j 的 GCD 並累加
            }
        cout << G << endl; // 輸出結果
    }
}

// 功能： 計算 x 與 y 的最大公因數 (GCD)
int GCD(int x, int y) {
    while (y != 0) { // 標準的輾轉相除法
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}
