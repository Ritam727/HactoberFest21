#define F first
#define S second
typedef long long ll;
const ll inf = LLONG_MAX;

struct segTree {
    int size = 1;
    vector<pair<ll, int>> mins;

    void init(int n) {
        while(size < n) {
            size *= 2;
        }
        mins.assign(2*size, {inf, 0});
    }

    void build(vector<int>& v, int n, int x, int lx, int rx) {
        if(rx-lx == 1) {
            if(lx < n) {
                mins[x] = {v[lx], lx};
            }
            return;
        }
        int m = (lx+rx)/2;
        build(v, n, 2*x+1, lx, m);
        build(v, n, 2*x+2, m, rx);
        mins[x] = min(mins[2*x+1], mins[2*x+2]);
    }

    void build(vector<int>& v, int n) {
        build(v, n, 0, 0, size);
    }

    pair<ll, int> getMin(int l, int r, int x, int lx, int rx) {
        if(lx >= r || rx <= l) {
            return {inf, 0};
        }
        if(l <= lx && rx <= r) {
            return mins[x];
        }
        int m = (lx+rx)/2;
        return min(getMin(l, r, 2*x+1, lx, m), getMin(l, r, 2*x+2, m, rx));
    }

    pair<ll, int> getMin(int l, int r) {
        return getMin(l, r, 0, 0, size);
    }

    ll getMaxArea(int l, int r) {
        if(r-l == 0) {
            return 0;
        }
        pair<ll, int> mi = getMin(l, r);
        ll ma = max(getMaxArea(l, mi.S), getMaxArea(mi.S+1, r));
        return max(ma, mi.F*(r-l));
    }
};

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        segTree st; st.init(heights.size());
        st.build(heights, heights.size());
        return st.getMaxArea(0, heights.size());
    }
};
