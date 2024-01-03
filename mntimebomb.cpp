#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void fast()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main()
{
    fast();
    int t;
    cin >> t;
    int c;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        ll s = b;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            s += min(c, a - 1);
        }
        cout << s << endl;
    }
}