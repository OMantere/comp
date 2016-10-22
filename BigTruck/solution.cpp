#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie();
#define ll long long
#define vi vector<int>
#define pb push_back
#define vpii vector<pii>
#define vvi vector< vector<int> >
#define si set<int>
#define mi map<string, int>
#define vvpii vector< vector< pair< int , int > > > 

using namespace std;

typedef tuple<int, int, int> iii;
typedef vector< tuple<int, int, int> > viii;
typedef pair<int, int> pii;

vi dist, value;

class compare {
    public:
        bool operator() (iii p1, iii p2) {
            return get<1>(p1) > get<1>(p2);
        }
};

pii dijkstra(vvpii g, vi items, int s, int e) {
    int cur, cur_d, cur_v;
    priority_queue< iii, viii, compare > pq;
    dist.push_back(0);
    value.push_back(items[s]);
    pq.push(iii(0, 0, items[0]));
    for(int i = 1; i < g.size(); i++) {
        dist.push_back(1e9);
        value.push_back(-1);
    }
    //dijkstra
    while(!pq.empty()) {
        tie(cur, cur_d, cur_v) = pq.top();
        pq.pop();
        vpii node = g[cur];
        for(auto child : node) {
            int idx = child.first;
            int d = cur_d + child.second; 
            if(d < dist[idx]) {
                dist[idx] = d; 
                value[idx] = items[idx] + cur_v;
                pq.push(iii(idx, d, value[idx]));
            } else if( d == dist[idx] ) {
                value[idx] = max(items[idx] + cur_v, value[idx]);
                pq.push(iii(idx, d, value[idx]));
            }
        }
    }
    return make_pair(dist[e], value[e]);
}





int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vvpii g;
    int n, m, x, l, v;
    cin >> n;
    vi items;
    for(int i = 0; i < n; i++) {
        g.push_back(vpii(0));
        cin >> x;
        items.push_back(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        int a, b, d;
        cin >> a;
        cin >> b;
        cin >> d;
        g[a-1].push_back(make_pair(b-1, d));
        g[b-1].push_back(make_pair(a-1, d));
    }

    tie(l, v) = dijkstra(g, items, 0, n-1);
    if(l == 1e9) {
        cout << "impossible" << endl;
        return 0;
    }

    cout << l << " " << v << endl;

    return 0;
}
