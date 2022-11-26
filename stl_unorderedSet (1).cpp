#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,q,x;
    char cmd;
    cin >> t;
    while(t--) {
        cin >> q;
        unordered_set<int> us;
        while(q--) {
            cin >> cmd;
            if (cmd=='a') {
                cin >> x;
                us.insert(x);
            }
            if (cmd=='b') {
                cin >> x;
                us.erase(x);
            }
            if (cmd=='c') {
                cin >> x;
                if (us.count(x)!=0) cout << 1 << " ";
                else cout << -1 << " ";
            }
            if (cmd=='d') {
                cout << us.size() << " ";
            }
        }
        cout << "\n";
    }
}

/*
2
5
a 1 a 2 a 3 b 2 d
4
a 1 a 5 d c 2
*/