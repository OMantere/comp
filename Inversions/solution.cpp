#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie();
#define ll long long
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pii>
#define vvi vector< vector<int> >
#define si set<int>
#define mi map<string, int>
#define N (1 << 17)

using namespace std;

int sp[2*N];
ll inv = 0;

void st(int x) {
    x += N;
    sp[x]++;
    for(x /= 2; x > 0; x /= 2) {
        sp[x] = sp[2*x] + sp[2*x+1];
    }
}

ll sum(int a, int b) {
    a += N;
    b += N;
    ll s = 0;
    while(a <= b) {
        if(a % 2 == 1) s += sp[a++];
        if(b % 2 == 0) s += sp[b--];
        a /= 2; b /= 2;
    }
    return s;
}

int main() { _

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int t, x;
        cin >> t;
        if (t == 1) {
            cin >> x;
            st(x);
            inv += sum(x+1, 100002);
        } else if(t == 2) {
            cin >> x;
            st(x);
            inv += sum(1, x-1);
        } else if(t == 3) inv = 0; 
        else 
            cout << inv << endl;
    }

    return 0;
}
