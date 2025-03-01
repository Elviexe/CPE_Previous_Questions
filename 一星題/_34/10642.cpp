// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1583

#include <iostream>
using namespace std;

int main() {
    int num, x1, y1, x2, y2; 
    //num=>測試資料數量 (x1, y1)和(x2, y2)分別為起點與終點的座標

    while (cin >> num) { // 讀取測試資料的數量
        for (int i = 1; i <= num; ++i) 
        { // 處理每組測試資料
            cin >> y1 >> x1 >> y2 >> x2; 
            // 讀取座標 (注意：題目要求是 y 在前，x 在後)

            // 計算起點與終點的序列位置
            long long n = (x1 + y1) * (x1 + y1 + 1LL) / 2LL + y1; 
            // 起點 P(x1, y1)
   

            long long m = (x2 + y2) * (x2 + y2 + 1LL) / 2LL + y2; 
            // 終點 P(x2, y2)

            
            cout << "Case " << i << ": " << (m - n) << endl;
            // 輸出結果，計算步數差距
        }
    }
    return 0;
    
}
