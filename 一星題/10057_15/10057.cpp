#include <iostream>
#include <algorithm>
using namespace std;
int s[1000005];
int main() 
{
    int n;
    while (cin >> n) 
	{
        for (int i = 0; i < n; ++i)
            cin >> s[i];

        int mid1 = (n - 1) / 2, mid2 = n / 2; // 中位數可能的兩個位置
        nth_element(s, s + mid1, s + n);
        nth_element(s, s + mid2, s + n);

        int val = s[mid1], count = 0;
        for (int i = 0; i < n; ++i)
            count += (s[i] == val || s[i] == s[mid2]);

        cout << val << " " << count << " " << (s[mid2] - val + 1) << endl;
    }
    return 0;
}
