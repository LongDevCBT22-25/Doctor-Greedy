/*
    Author : Vo Minh Long
    Organization : Ben Tre High School for Gifted Students
    E-mail : vominhlongbentre@gmail.com
             linh.pb@oude.edu.vn
    Date Modified : 26 Nov 2022
*/
#include <bits/stdc++.h>
#define FastIO ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define F first
#define S second
using namespace std;
vector<pair<int, int> > a;
int n;
void input(){
    FastIO;
    freopen("DOCTOR.INP","r",stdin);
    freopen("DOCTOR.OUT","w",stdout);
    cin >> n; 
    int t1,t2;
    while(cin >> t1 >> t2) a.push_back(make_pair(t1,t2));
}
void sol(){
    sort(a.begin(),a.end());
    int ans = a[0].F + a[0].S;
    for(int i = 1; i < n; i++)
        (ans < a[i].F)
            ? ans = a[i].F + a[i].S
            : ans += a[i].S;
    cout << ans;
}
int32_t main(){
    input();
    sol();
}