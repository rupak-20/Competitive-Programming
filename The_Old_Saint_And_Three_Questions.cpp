//The Old Saint And Three Questions
//https://www.codechef.com/problems/THREEQ

#include<vector>
//#include<queue>
//#include<stack>
//#include<set>
//#include<map>
//#include<unordered_set>
//#include<unordered_map>
//#include<deque>

//#include<priority_queue>

#include<iostream>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>

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
#define ALL(x) x.begin(), x.end()

#define FOR(a, b, c) for (int(a) = (b); (a)<(c); ++(a))
#define FORE(a, b, c) for (int(a) = (b); (a)<=(c); ++(a))
#define FORGE(a, b, c) for (int(a) = (b); (a)>=(c); --(a))
#define FORSQE(a, b, c) for (int(a) = (b); (a)*(a) <= (c); ++(a))

#define FORC(a, b, c) for (char(a) = (b); (a)<(c); ++(a))
#define FORCE(a, b, c) for (char(a) = (b); (a)<=(c); ++(a))

#define FORAT(a, b) for (auto &(a) : (b))
#define FORALL(a, b) for (auto (a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPE(i, n) FORE(i, 1, n)

#define SQR(x) ((x) * (x))


//driver code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test; cin >> Test;
    while(Test--) {
        //test case start

        int ans[3], hero[3], sumans, sumhero;
        cin>>ans[0]>>ans[1]>>ans[2];
        sumans = ans[0] + ans[1] + ans[2];
        cin>>hero[0]>>hero[1]>>hero[2];
        sumhero = hero[0] + hero[1] + hero[2];

        if(sumans == sumhero)
        cout<<"Pass\n";
        else
        cout<<"Fail\n";        

        //test case end
    }

    return 0;
}