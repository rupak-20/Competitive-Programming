//Airline Restrictions
//https://www.codechef.com/problems/AIRLINE

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

// IO
void input() { }
template <typename T, typename... Args>
void read (T& t, Args&... args) {	cin>>t;	read(args...);}

void print() { }
template <typename T, typename... Args>
void write (T& t, Args&... args) {	cout<<t<<" ";	write(args...);}


//driver code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test; cin >> Test;
    while(Test--) {
        //solution start

        int a,b,c,d,e; cin>>a>>b>>c>>d>>e;

        if(a+b+c > d+e)
        cout<<"no\n";
        else {
            if(a+b <= d && c <= e)
            cout<<"yes\n";
            else if(b+c <= d && a <= e)
            cout<<"yes\n";
            else if(a+c <= d && b <= e)
            cout<<"yes\n";
            else cout<<"no\n";
        }

        //solution end
    }

    return 0;
}