class Solution {
public:
    bool checkPerfectNumber(int num) {
        int count=0;
        int i;
        int j=0;
        if(num==1)
            return 0;
        for(i=1; i<=sqrt(num); i++)
        {
            if(num%i==0)
            { count+=i;
             j=i;}
            
        }
        if(count*j==num)
            return 1;
        else
            return 0;
    }
};
