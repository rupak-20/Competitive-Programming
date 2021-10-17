//Chef_and_Typing
//https://www.codechef.com/SDPCB21/problems/TYPING

//#include<bits/stdc++.h>

#include<vector>
//#include<queue>
//#include<stack>
//#include<set>
//#include<map>
//#include<unordered_set>
#include<unordered_map>
//#include<deque>
//#include<utility>

//#include<priority_queue>

#include<iostream>
#include<algorithm>
#include<string>
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
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

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



//driver code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test; cin >> Test;
    while(Test--) {
        //solution start

        int n; cin>>n;
        unordered_map<string, int> m;
        int total = 0;

        range(i, n) {
            string s; cin>>s;

            if(m.find(s) == m.end()) {
                m[s] = 2;

                for(int i=1; i<s.length(); i++) {
                    if(((s[i]=='d' || s[i]=='f') && (s[i-1]=='j' || s[i-1]=='k')) || ((s[i]=='j' || s[i]=='k') && (s[i-1]=='d' || s[i-1]=='f'))) {
                        m[s] += 2;
                        //cout<<s[i-1]<<" "<<s[i]<<" added two\n";
                    }

                    else if(((s[i]=='d' || s[i]=='f') && (s[i-1]=='d' || s[i-1]=='f')) || ((s[i]=='j' || s[i]=='k') && (s[i-1]=='j' || s[i-1]=='k'))) {
                        m[s] += 4;
                        //cout<<s[i-1]<<" "<<s[i]<<" added four\n";
                    }
                }
                total += m[s];
            }

            else {
                total += m[s]/2;
                //cout<<"else\n";
            }
        }

        cout<<total<<"\n";
        
        //solution end
    }

    return 0;
}