//二分查找
class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int low = 1;
        int high = x;
        int mid ;
        while(true)
        {
            //cout<<low<<' '<<high<<' '<<mid<<endl;
            mid =low+(high-low)/2;
            if(mid>x/mid) high =mid-1;
            else
            {            
                if (mid + 1 > x/(mid + 1)) return mid;
                low = mid+1;
            }
            
        }
    }
};
