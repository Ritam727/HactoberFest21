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

    void set(int i, ll v, int x, int lx, int rx) {
        if(rx-lx == 1) {
            mins[x] = {v, i};
            return;
        }
        int m = (lx+rx)/2;
        if(i < m) {
            set(i, v, 2*x+1, lx, m);
        } else {
            set(i, v, 2*x+2, m, rx);
        }
        mins[x] = min(mins[2*x+1], mins[2*x+2]);
    }

    void set(int i, ll v) {
        set(i, v, 0, 0, size);
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
    segTree st;
    void seg(vector<int>& heights) {
        st.init(heights.size());
        for(int i = 0; i < heights.size(); i++) {
            st.set(i, heights[i]);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        seg(heights);
        return st.getMaxArea(0, heights.size());
    }
};
