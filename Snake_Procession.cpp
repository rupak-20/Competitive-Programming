//Snake_Procession
//https://www.codechef.com/SDPCB21/problems/SNAKPROC

//#include<bits/stdc++.h>

#include<vector>
//#include<queue>
#include<stack>
//#include<set>
//#include<map>
//#include<unordered_set>
//#include<unordered_map>
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

        int l; cin>>l;
        string r;
        cin>>r;

        stack<char> s;
        bool flag = false;

        range(i, l) {
            if(r[i] == '.')
            continue;

            else if(r[i] == 'H' && s.size()==0) {
                s.push('H');
            }
            
            else if(r[i] == 'T' && s.size()==1) {
                s.pop();
            }
            
            else if(r[i]=='H' && s.size()>=1){
                flag = true;
                break;
            }

            else if(r[i]=='T' && s.size()==0) {
                flag = true; 
                break;
            }
        }

        if(s.size()>0) flag = true;
        if(flag)
        cout<<"Invalid\n";
        else
        cout<<"Valid\n";
        
        //solution end
    }

    return 0;
}