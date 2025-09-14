class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        while(x!=0){
            long long digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if( rev<INT_MIN || rev>INT_MAX|| x==-1) 
            return 0;
        
        return rev;
    }
};
