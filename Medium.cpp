class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if (m == 0)
        {
            return findMedianSortedArrays(B,n);
        }
        if (n == 0)
        {
            return findMedianSortedArrays(A,m);
        }
        
        if ((m + n) % 2 != 0)
            return findKSortdArrays(A,0,m - 1,B,0,n - 1,(m + n) / 2 + 1);
        else
        {
            double mid1 = (double)findKSortdArrays(A,0,m - 1,B,0,n - 1,(m + n) / 2);
            double mid2 = (double)findKSortdArrays(A,0,m - 1,B,0,n - 1,(m + n) / 2 + 1);
            return (mid1 + mid2) / 2;
        }
    }
    int findKSortdArrays(int A[], int beginA, int endA,int B[], int beginB, int endB, int k)
    {
        int midA = (beginA + endA) / 2;
        int midB = (beginB + endB) / 2;
        
        if (beginA > endA)
        {
            return B[beginB + k - 1];
        }    
        if (beginB > endB)
        {
            return A[beginA + k - 1];
        }
        
        if (A[midA] <= B[midB])
        {
            if (k <= (midA - beginA + midB - beginB + 1))
            {
                return findKSortdArrays(A,beginA,endA,B,beginB, midB - 1,k);
            }
            else
            {
                return findKSortdArrays(A,midA + 1,endA,B,beginB,endB,k - (midA - beginA) - 1);
            }
        }
        else
        {
            if (k <= (midA - beginA + midB - beginB + 1))
            {
                return findKSortdArrays(A,beginA,midA - 1,B,beginB,endB,k);
            }
            else
            {
                return findKSortdArrays(A,beginA,endA,B,midB + 1,endB,k - (midB - beginB) - 1);
            }            
        }
    }
    
    double findMedianSortedArrays(int arr[], int size)
    {
        if (size % 2 == 0)
        {
            return ((double)arr[size / 2] + arr[size / 2 - 1]) /2 ;
        }
        return arr[size / 2];
    }
};