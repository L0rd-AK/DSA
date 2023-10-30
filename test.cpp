#include<bits/stdc++.h>
using namespace std;

string lcs(string X, string Y, int m, int n, string s) {
    if (m == 0 || n == 0)
        return string(s.rbegin(), s.rend());
    if (X[m-1] == Y[n-1])
        return lcs(X, Y, m-1, n-1, s+X[m-1]);
    else {
        string s1 = lcs(X, Y, m-1, n, s);
        string s2 = lcs(X, Y, m, n-1, s);
        return (s1.size() > s2.size()) ? s1 : s2;
    }
}

int main() {
    string X = "amit";
    string Y = "GXTXAYB";
    cout << "LCS of " << X << " and " << Y << " is " << lcs(X , Y, X.size(), Y.size(), "");
    return 0;
}
