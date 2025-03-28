#include <bits/stdc++.h>
using namespace std;

// Recursion
// int f(int i){
//     if(i==0) return 0;
//     if(i==1) return 1;
//     return f(i-1)+f(i-2);  // Iterative solution
// }
// Memoization
// int f(int i,vector<int>&dp)
// {
//     if(i==0) return 0;
//     if(i==1) return 1;
//     if(dp[i]!=-1) return dp[i];
//     return dp[i]= f(i-1,dp)+f(i-2,dp);  
// }

// tabulation 
    int fib(int n) {
    vector<int>dp(n+1,-1);
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fib(n) << endl;
    return 0;
 
}