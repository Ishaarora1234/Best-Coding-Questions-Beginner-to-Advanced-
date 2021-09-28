class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n=S.length();
        int m=J.length();
        int i=0,j=0,count=0;
        while(i<=m)
        { for(j=0;j<=n;j++)
            {
                if(S[j]==J[i])
                count++;
            }
         i++;
        }
 return count-1;   }
};
