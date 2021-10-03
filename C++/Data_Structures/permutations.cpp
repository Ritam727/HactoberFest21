// A is distinct + map

void nextPermutation(vector<int> A, int idx, unordered_map<int, bool> mp, vector<int> comb, vector<vector<int> > &ans) {
	if (idx == A.size()) {
		ans.push_back(comb);
		return;
	}

	for (int i = 0; i < A.size(); i++) {
		if (mp[A[i]]) {
			comb.push_back(A[i]);
			mp[A[i]] = 0;
			nextPermutation(A, idx + 1, mp, comb, ans);

			comb.pop_back();
			mp[A[i]] = 1;
		}
	}
}

vector<vector<int> > Solution::permute(vector<int> &A) {
	int n = A.size();
	unordered_map<int, bool> mp;
	for (int x : A) {
		mp[x] = 1;
	}
	vector<vector<int> > ans;
	nextPermutation(A, 0, mp, vector<int> (), ans);
	return ans;

}

//or

// A is distinct + swap

class Solution {
public:
	void permute(vector<int> &num, int start, vector<vector<int> > &result) {
		if (start == num.size() - 1) {
			result.push_back(num);
			return;
		}
		for (int i = start; i < num.size(); i++) {
			swap(num[start], num[i]);
			permute(num, start + 1, result);
			swap(num[start], num[i]);
		}
	}

	vector<vector<int> > permute(vector<int> &num) {
		vector<vector<int> > result;
		if (num.size() == 0)
			return result;
		sort(num.begin(), num.end());
		permute(num, 0, result);
		return result;
	}
};


//or

//A contains duplicates + index map + sort

public List<List<Integer>> permuteUnique(int[] nums) {
	List<List<Integer>> list = new ArrayList<>();
	Arrays.sort(nums);
	backtrack(list, new ArrayList<>(), nums, new boolean[nums.length]);
	return list;
}

private void backtrack(List<List<Integer>> list, List<Integer> tempList, int [] nums, boolean [] used) {
	if (tempList.size() == nums.length) {
		list.add(new ArrayList<>(tempList));
	} else {
		for (int i = 0; i < nums.length; i++) {
			if (used[i] || i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;
			used[i] = true;
			tempList.add(nums[i]);
			backtrack(list, tempList, nums, used);
			used[i] = false;
			tempList.remove(tempList.size() - 1);
		}
	}
}