string mul(string s1, int a) {
    string s2 = to_string(a);

    int m = s1.size();
    int n = s2.size();

    string s(m + n, '0');

    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int num = (s1[i] - '0') * (s2[j] - '0') + (s[i + j + 1] - '0');
            s[i + j + 1] = num % 10 + '0';
            s[i + j] += num / 10;
        }
    }
    return s;


}

string factorial(int a) {
    string s = to_string(a);
    for (int i = a - 1; i >= 1; i-- ) {
        s = mul(s, i);
    }

    return s;
}

string Solution::solve(int A) {

    string ans =  factorial(A);
    int i = 0;
    while (i < ans.size() && ans[i] == '0')
        i++;

    return ans.substr(i);
}

//or

void mul(vector<int> &v, int num, int &size)
{
    int carry = 0;

    for (int i = 0; i < size; i++)
    {
        v[i] = v[i] * num + carry;
        carry = v[i] / 10;
        v[i] %= 10;
    }

    while (carry)
    {
        v[size] = carry % 10;
        carry /= 10;
        size++;
    }


}

string answer(int A)
{
    string s = "";
    vector<int> v(1000, 1);
    int size = 1;

    for (int i = 2; i <= A; i++)
    {
        mul(v, i, size);
    }

    for (int i = size - 1; i >= 0; i--)
        s += to_string(v[i]);

    return s;
}
string Solution::solve(int A) {
    return answer(A);
}


// or
