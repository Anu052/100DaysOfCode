#include <bits/stdc++.h>
class Solution
{
public:
    bool isPossible(int A[], int n, int B, int mid)
    {
        int studentsreq = 1;
        int cursum = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] > mid)
                return 0;
            if (cursum + A[i] > mid)
            {
                studentsreq += 1;
                cursum = A[i];
            }
            else
            {
                cursum += A[i];
            }
        }
        return studentsreq <= B;
    }
    int findPages(int A[], int n, int B)
    {
        if (n < B)
            return -1;
        long long sum = 0;
        int lo = 0, hi = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
        }
        lo = 0, hi = sum;
        int ans = -1;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (isPossible(A, n, B, mid))
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return ans;
    }
};