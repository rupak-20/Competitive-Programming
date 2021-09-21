//Shuffling_Parities
//https://www.codechef.com/SEPT21C/problems/SHUFFLIN

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
#include<string>
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



//driver code
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test; cin >> Test;
    while(Test--) {
        //solution start

        int n, s = 0; cin>>n;
        if(n%2==0) {
            int o = n/2, e = n/2;

            while(o>0 && e>0) {
                int x;
                cin>>x;
                if(x%2==0) {
                    e--;
                    s++;
                }
                else {
                    o--;
                    s++;
                }         
            }

            while(o>0) {
                int x;
                cin>>x;
                if(x%2!=0) {
                    s++;
                }
                o--;
            }

            while(e>0){
                int x;
                cin>>x;
                if(x%2==0) {
                    s++;

                }
                e--;
            }
        }

        else {
            int o = n/2, e = n/2 + 1;

            while(o>0 && e>0) {
                int x;
                cin>>x;
                if(x%2==0) {
                    e--;
                    s++;
                }
                else {
                    o--;
                    s++;
                }         
            }

            while(o>0) {
                int x;
                cin>>x;
                if(x%2!=0) {
                    s++;
                }
                o--;
            }

            while(e>0){
                int x;
                cin>>x;
                if(x%2==0) {
                    s++;
                }
                e--;
            }
        }

        cout<<s<<"\n";

        //solution end
    }

    return 0;
}