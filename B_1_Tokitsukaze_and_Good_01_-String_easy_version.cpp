// #include<bits/stdc++.h>
// #define Rajat_Joshi            main;
// #define  CSE             ios_base::sync_with_stdio(false);
// #define Joshi           cin.tie(NULL);
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <sstream>
// #include <queue>
// #include <deque>
// #include <bitset>
// #include <iterator>
// #include <list>
// #include <stack>
// #include <map>
// #include <set>
// #include <functional>
// #include <numeric>
// #include <utility>
// #include <limits>
// #include <time.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
// using namespace std;
// #define read(type) readInt<type>()
// #define ll long long
// #define nL


// #define pb push_back
// #define mk make_pair
// #define pii pair<int, int>
// #define a first
// #define b second
// #define vi vector<int>
// #define all(x) (x).begin(), (x).end()
// #define umap unordered_map
// #define uset unordered_set
// #define MOD 1000000007
// #define imax INT_MAX
// #define imin INT_MIN
// #define exp 1e9
// #define sz(x) (int((x).size()))
// int32_t main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int ttt; cin >> ttt;
// while(ttt--) {
// //_______________________________________________________//
// Rajat_Joshi CSE;
// int n;
// cin>>n;

// string s;
// cin>>s;
//     int count=0,answer=0;
//     int ch=s[0];
//     for(int i=1;i<n;++i)
//     {
//         if(count==0)
//         {
//             count++;
//             ch=s[i];
//             continue;
//         }
//         if(s[i]&count){count++;}
//         else if(count==1)
//         {answer++;count=0;}
//         else{count=1;ch=s[i];}
//     }
//     cout<<answer<<endl;
// }
// return 0;
// }


#include<bits/stdc++.h>
#define Rajat_Joshi            main;
#define  CSE             ios_base::sync_with_stdio(false);
#define Joshi           cin.tie(NULL);
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL


#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
while(ttt--) {
//_______________________________________________________//
Rajat_Joshi CSE;
int n;
cin>>n;
string s;
cin>>s;

int count =0;
for(int i=0;i<n-1;i+=2)
{
    if(s[i] != s[i+1])
    {
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}