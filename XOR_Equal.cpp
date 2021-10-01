//XOR_Equal
//https://www.codechef.com/SEPT21C/problems/PALINT

//#include<bits/stdc++.h>

#include<vector>
//#include<queue>
//#include<stack>
//#include<set>
//#include<map>
//#include<unordered_set>
#include<unordered_map>
//#include<deque>
#include<utility>

//#include<priority_queue>

#include<iostream>
#include<algorithm>
//#include<string>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//#include<climits>

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

int count(vii v,int r, int t) {
    int ct = 0;
    range(i, r)
    if(v[i].first == t)
    ct++;
    return ct;
}

//driver code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test; cin >> Test;
    while(Test--) {
        //solution start

        int n, x, num, eql = 1, minop = 0; cin>>n>>x;

        unordered_map<int,int> umap1, umap2;
        range(i, n) {
            cin>>num;
            ++umap1[num];
            umap2[num] = 1;

            if(umap1[num] == n)
            eql = n;
            else if(umap1[num] > eql)
            eql = umap1[num];
        }

        if(n == 1) {
            cout<<1<<" "<<0<<"\n";
            continue;
        }

        if(x == 0) {
            cout<<eql<<" "<<minop<<"\n";
            continue;
        }

        for(auto i : umap1) {
            if(umap2[i.first ^ x] == 1) {
                if(i.second + umap1[i.first ^ x] > eql) {
                    eql = i.second + umap1[i.first ^ x];
                    minop = min(i.second, umap1[i.first ^ x]);
                }
                else if(i.second + umap1[i.first ^ x] == eql) {
                    if(min(i.second, umap1[i.first ^ x]) < minop)
                    minop = min(i.second, umap1[i.first ^ x]);
                }              
            }
        }
    
        cout<<eql<<" "<<minop<<"\n";

        //solution end
    }

    return 0;
}