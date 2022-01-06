//And_Or_Union
//https://www.codechef.com/START21B/submit/ANDORUNI

#include <bits/stdc++.h>

//#include<vector>
//#include<queue>
//#include<stack>
//#include<set>
//#include<map>
//#include<unordered_set>
//#include<unordered_map>
//#include<deque>
//#include<utility>

//#include<priority_queue>

//#include<iostream>
//#include<algorithm>
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
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// loop
#define fo(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define foe(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define foge(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define fosq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))

#define foc(a, b, c) for (char(a) = (b); (a) < (c); ++(a))
#define foce(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))

#define foat(a, b) for (auto &(a) : (b))
#define foall(a, b) for (auto(a) : (b))
#define range(i, n) fo(i, 0, n)

// util
#define sqr(x) ((x) * (x))
#define minele(a) *min_element(all(a))
#define maxele(a) *max_element(all(a))
#define sum(a) accumulate(all(a), 0)

void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c == '-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

void getPairsMerge(int arr[], int l, int r, int mid, vector<pair<int, int>> &p)
{
    int b[l + r + 1], i = l, k = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (arr[i] > arr[j])
        {
            b[k] = arr[j];
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[j], arr[j]});
            k++;
            j++;
        }
        else
        {
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[i], arr[i]});
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        p.push_back({arr[i], arr[i]});
        i++;
        k++;
    }
    while (j <= r)
    {
        b[k] = arr[j];
        p.push_back({arr[j], arr[j]});
        j++;
        k++;
    }

    for (int x = l; x <= r; x++)
    {
        arr[x] = b[x];
    }
}

void getAllPairs(int arr[], int l, int r, vector<pair<int, int>> &p)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        getAllPairs(arr, l, mid, p);
        getAllPairs(arr, mid + 1, r, p);
        getPairsMerge(arr, l, r, mid, p);
    }
}

//driver code
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test;
    cin >> Test;
    while (Test--)
    {
        //solution start

        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> count(31);
        for(int bit=30; bit>=0; bit--) {
            for(int i=0; i<n; i++) {
                if((1 << bit) & a[i]) {
                    count[bit]++;
                }
            }
        }

        int res = 0;
        for(int bit=30; bit>=0; bit--) {
            if(count[bit] > 1) {
                res += (1 << bit);
            }
        }

        cout<<res<<"\n";

        //solution end
    }

    return 0;
}