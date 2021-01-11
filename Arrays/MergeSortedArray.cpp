class Solution {
    
public:
    void swap(int* a, int* b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=m-1;i>-1;i--)
        {
            swap(&nums1[i],&nums1[i+n]);
        }
        
        int i=n,j=0,k=0;
        while(i<m+n&&j<n)
        {
            if(nums2[j]<=nums1[i])
            {
                swap(&nums1[k],&nums2[j]);
                k++;j++;
            }
            else
            {
                swap(&nums1[i],&nums1[k]); k++; i++;
            }
        }
        
        while(j<n)
        {
            swap(&nums1[k],&nums2[j]);
            k++;j++;
        }
        
        return;
    }
};
