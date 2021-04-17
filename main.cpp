#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Solution {
public:
    int dp[505][505];

    int lcs(vector<int>& A, vector<int>& B,int m,int n)
    {
        if(m==0 || n==0) return dp[m][n]=0;

        if(dp[m][n]!=-1)
            return dp[m][n];

        if(A[m-1]==B[n-1])
            return dp[m][n]= 1 + lcs(A,B,m-1,n-1);
        else
            return dp[m][n]=max(lcs(A,B,m-1,n),lcs(A,B,m,n-1));
    }

    int maxUncrossedLines(std::vector<int>& A, std::vector<int>& B) {

        int m=A.size();
        int n=B.size();
        memset(dp,-1,sizeof(dp));
        return  lcs(A,B,m,n);
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution x;
    std::vector<int> A = {1, 4, 2};
    std::vector<int> B = {1, 2, 4};
    std::cout << x.maxUncrossedLines(A, B) << std::endl << std::endl;
    std::vector<int> C = {2,5,1,2,5};
    std::vector<int> D = {10,5,2,1,5,2};
    std::cout << x.maxUncrossedLines(C, D) << std::endl << std::endl;
    std::vector<int> E = {1,3,7,1,7,5};
    std::vector<int> F = {1,9,2,5,1};
    std::cout << x.maxUncrossedLines(E, F) << std::endl << std::endl;
    std::vector<int> G = {2,1};
    std::vector<int> H = {1,2,1,3,3,2};
    std::cout << x.maxUncrossedLines(G, H) << std::endl << std::endl;
    std::vector<int> I = {3};
    std::vector<int> J = {3,3,2};
    std::cout << x.maxUncrossedLines(I, J) << std::endl << std::endl;
    std::vector<int> K = {3, 3};
    std::vector<int> L = {1,3,1,2,1};
    std::cout << x.maxUncrossedLines(K, L) << std::endl << std::endl;
    std::vector<int> M = {1,1,2,1,2};
    std::vector<int> N = {1,3,2,3,1};
    std::cout << x.maxUncrossedLines(M, N) << std::endl << std::endl;
    return 0;
}
