//Maximum_Points
//https://www.codechef.com/START12C/problems/MAXPOINT

//#include<bits/stdc++.h>

#include<vector>
//#include<queue>
//#include<stack>
//#include<set>
//#include<map>
//#include<unordered_set>
//#include<unordered_map>
//#include<deque>
//#include<utility>

//#include<priority_queue>

#include<iostream>
#include<algorithm>
//#include<string>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
#include<climits>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define MAX INT_MAX
#define MIN INT_MIN
#define all(x) x.begin(), x.end()

// loop
#define fo(a, b, c) for (int(a) = (b); (a)<(c); ++(a))
#define foe(a, b, c) for (int(a) = (b); (a)<=(c); ++(a))
#define foge(a, b, c) for (int(a) = (b); (a)>=(c); --(a))
#define fosq(a, b, c) for (int(a) = (b); (a)*(a) <= (c); ++(a))

#define foc(a, b, c) for (char(a) = (b); (a)<(c); ++(a))
#define foce(a, b, c) for (char(a) = (b); (a)<=(c); ++(a))

#define foat(a, b) for (auto &(a) : (b))
#define foall(a, b) for (auto (a) : (b))
#define range(i, n) fo(i, 0, n)

// util
#define sqr(x) ((x) * (x))
#define minele(a) *min_element(all(a))
#define maxele(a) *max_element(all(a))
#define sum(a) accumulate(all(a), 0)


int ksackrec(int w, int wt[], int val[], int i, int** dp) {
    if (i < 0)
        return 0;
    if (dp[i][w] != -1)
        return dp[i][w];
    if (wt[i] > w) {
        dp[i][w] = ksackrec(w, wt, val, i - 1, dp);
        return dp[i][w];
    }
    else {
        dp[i][w] = max(val[i] + ksackrec(w - wt[i], wt, val, i - 1, dp), ksackrec(w, wt, val, i - 1, dp));
         return dp[i][w];
    }
}
 
int ksack(int w, int wt[], int val[], int n) {
    int** dp;
    dp = new int*[n];
    for (int i = 0; i < n; i++)
        dp[i] = new int[w + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < w + 1; j++)
            dp[i][j] = -1;
    return ksackrec(w, wt, val, n - 1, dp);
}

//driver code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test; cin >> Test;
    while(Test--) {
        //solution start

        int a,b,c,x,y,z; cin>>a>>b>>c>>x>>y>>z;
        int val[60];
        int wt[60];
        for(int i=0; i<20; i++) {
            val[i] = x;
            wt[i] = a;
        }
        for(int i=20; i<40; i++) {
            val[i] = y;
            wt[i] = b;
        }
        for(int i=40; i<60; i++) {
            val[i] = z;
            wt[i] = c;
        }

        int w = 240;
        int n = 60;
        cout<<ksack(w, wt, val, n)<<"\n";

        //solution end
    }

    return 0;
}