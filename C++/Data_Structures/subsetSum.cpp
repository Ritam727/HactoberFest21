#include <bits/stdc++.h>
using namespace std;


void nextSubset(vector<int> weights, int t, vector<int> comb, vector<vector<int>> &ans, int sum, int left) {
	if (sum == t) {
		ans.push_back(comb);
		return;
	}

	for (int i = left; i < weights.size(); i++) {

		if (sum + weights[i] <= t) {
			sum += weights[i];
			comb.push_back(weights[i]);

			nextSubset(weights, t, comb, ans, sum, i + 1);

			comb.pop_back();
			sum -= weights[i];
		}
	}
}


vector<vector<int> > findSubset(vector<int> weights, int t) {
	vector<int> comb;
	vector<vector<int> > ans;
	nextSubset(weights, t, comb, ans, 0, 0);
	return ans;
}



// Driver Code
int main()
{
	vector<int> weights({0, 1, 2});
	sort(weights.begin(), weights.end());
	vector<vector<int> > ans;
	ans = findSubset(weights, 3);
	for (auto v : ans) {
		for (int x : v)
			cout << x << " ";
		cout << endl;
	}

	cout << ans.size();
}
