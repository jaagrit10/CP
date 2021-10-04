// // TEMPLATE_JAAGRIT_ARORA
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define forloop_n for(ll i=0; i<n; i++)
// #define And &&
// #define Or ||
// #define vi vector<ll>
// #define pb(n) push_back(n)
// #define test_cases_loop ll t; cin >> t; while(t--)



// void solve(ll y, ll arr[])
// {
//     bool prime[1000000 + 1];
//     memset(prime, true, sizeof(prime));
//     vi primes;
 
//     for (ll p = 2; p * p <= 1000001; p++)
//     {
//         if (prime[p] == true)
//         {
            
//             for (ll i = p * p; i < 1000001; i += p)
//                 prime[i] = false;
//         }
//     }

    
 
    
//     for (ll p = 2; p < 1000001; p++)
//         if (prime[p])
            
//             primes.pb(p*p);

//     for(ll i =0; i<y; i++)
//     {
//         ll lo = 0;
//         ll hi = primes.size()-1;
//         ll ans = 0;
//         ll mid = 0;
//         while(lo<=hi)
//         {
            
//             mid = lo + (hi-lo)/2;
//             if (primes[mid]==arr[i])
//             {
//                 ans = 1;
//                 break;
//             }

//             else if (primes[mid]<arr[i])
//             {
//                 lo = mid+1;
//             }

//             else
//             {
//                 hi = mid-1;
//             }

//         }


//         if (ans)
//         {
//             cout << "YES" << "\n";
//         }

//         else
//         {
//             cout <<"NO" << "\n";
//         }

//     }
    
    
// }

// int main()


// {
//     flash
//     ll y; cin >> y;
//     ll arr[y];
//     for (ll i = 0; i<y; i++)
//     {
//         cin >> arr[i];
//     }

//     solve(y,arr);
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;
 
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
using ll = long long;
 
bool checkPrime(ll x)
{
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for(int i = 3; i < sqrt(x); i += 2)
    {
        if (x % i == 0)
            return false;
    }
 
    return true;
}
 
bool isTPrime(ll x)
{
    ll low = 1LL, high = x, mid;
 
    while(low <= high)
    {
        mid = low + (high - low)/2;
        unsigned long long sq = mid*mid;
 
        if (sq > x)
            high = mid - 1;
        else if (sq < x)    
            low = mid + 1;
        else
            break; // nearest integer value to sqrt(x) found 
    }
    if (mid*mid == x)
        return checkPrime(mid);
 
    return false;    
}
 
int main()
{
    FIO
    ll n; cin >> n;
    ll x;
 
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if (isTPrime(x) and x != 1)
            cout << "YES\n";
        else    
            cout << "NO\n";
    }
    return 0;
}