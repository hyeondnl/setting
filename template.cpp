/////////////////////////////////////////////////////////////////////////
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
#include <cmath>
#include <iostream>
#include <cstring>
#include <complex>
#include <iostream>
#define ll long long
#define pi pair<int, int>
#define vi vector<int>
#define vpi vector<pair<int, int> >
#define si stack<int>
#define pb push_back
#define mp make_pair
#define endl "\n"
#define FOR(in, START, END) for (int in = START; in < END; ++in)
#define FORD(in, START, END) for (int in = START; in >= END; --in)
#define VAR(i, n) __typeof(n) i = (n)
#define FOR_EACH(it, CONT) for (VAR(it, (CONT).begin()); it != (CONT).end(); ++it)
#define FOR_EACHD(it, CONT) for (VAR(it, (CONT).rbegin()); it != (CONT).rend(); ++it)
#define REP(in, n) FOR(in, 0, n)
#define CLR(a, x) memset(a, x, sizeof(a))
#define SIZE(x) ((int)x.size())
typedef long double ld;
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned double u_double;
typedef unsigned long u_long;
constexpr int INF = 1000000009;
constexpr long long INFLL = (ll)INF * (ll)INF;
constexpr ld EPS = 10e-9;
using namespace std;
//reading and printing
template<class T>
void read(T& a) {cin >> a;}
template<class T>
void read(vector<T>& v, int n) {int tmp; REP(i, n) {read(tmp); v.pb(tmp);};}
template<class T, class V>
void read(pair<T, V>& p) {read(p.first); read(p.second);}
template<class T>
void println(const T& a) {cout << a << "\n";}
void println(const char *s) {printf("%s\n", s);}
template<class T>
void print(const T& a) {cout << a << " ";}
template<class T>
void println(const vector<T>& v) {for (const auto &i : v) print(i); cout << "\n";}
template<class T>
void print(const vector<T>& v) {for (const auto &i : v) print(i); cout << " ";}
template<class T, class V>
void println(const pair<T, V>& p) {print(p.first); println(p.second);}
template<class T, class V>
void print(const pair<T, V>& p) {print(p.first); print(p.second);}
/////////////////////////////////////////////////////////////////////////
