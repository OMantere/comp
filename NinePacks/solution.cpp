#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie();
#define ll long long
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pii>
#define vvi vector< vector< int > >
#define si set<int>

using namespace std;


int opt(int i, int k) {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ch, cb, H, B;

    ch = cb = 0;

    cin >> H;
    vi h = vi(H); 
    for(int i = 0; i < H; i++) {
        int x;
        cin >> x;
        h[i] = x;
        ch += x;
    }

    cin >> B;
    vi b = vi(B);
    for(int i = 0; i < B; i++) {
        int x;
        cin >> x;
        b[i] = x;
        cb += x;
    }

    int C = min(ch, cb);

    vvi dpH = vvi(C+1, vi(H+1, 1e9));
    vvi dpB = vvi(C+1, vi(B+1, 1e9));
    dpB[0][0] = 0;
    dpH[0][0] = 0;
    int count = 1e9;

    // Using the knapsack algorithm with dpB denoting the number of buns and dpH the number of hotdogs 
    for(int k = 0; k < C+1; k++) {
        for(int i = 1; i < max(B, H)+1; i++) {
            if(i < H+1) {
                int hi = h[i-1];
                if(hi > k) {
                    dpH[k][i] = dpH[k][i-1];
                } else {
                    dpH[k][i] = min(1 + dpH[k-hi][i-1], dpH[k][i-1]);
                }
            }
            if(i < B+1) {
                int bi = b[i-1];
                if(bi > k) {
                    dpB[k][i] = dpB[k][i-1];
                } else {
                    dpB[k][i] = min(1 + dpB[k-bi][i-1], dpB[k][i-1]);
                }
            }
        }
        if(k > 0)
            count = min(count, dpH[k][H] + dpB[k][B]);
    }

    if(count == 1e9)
        cout << "impossible" << endl;
    else
        cout << count << endl;

    return 0;
}
