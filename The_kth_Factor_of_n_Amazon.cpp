class Solution {
public:
    int kthFactor(int n, int k) {
        int c=0;
        int ele=0;
        int fact=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
                ele=i;
                if(c==k)
                return ele;
            }
        }
        return -1;
    }
};
