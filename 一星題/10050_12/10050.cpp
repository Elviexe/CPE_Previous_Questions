#include <iostream>
#include <set>
using namespace std;

int main() {
    int T, N, P, h;
    cin >> T;
    while (T--) {
        cin >> N >> P;
        set<int> strike_days;
        while (P--) {
            cin >> h;
            for (int d = h; d <= N; d += h)
                if (d % 7 != 6 && d % 7 != 0) // 排除週五(6)和週六(0)
                    strike_days.insert(d);
        }
        cout << strike_days.size() << "\n"; // 計算罷工日數量
    }
    return 0;
}
