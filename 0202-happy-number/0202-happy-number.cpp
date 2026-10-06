class Solution {
public:
int func(int n){
int sum = 0 ;
while(n>0){
    int d = n%10;
    sum+=d*d;
    n=n/10;
}
return sum;
}

    bool isHappy(int n) {
        int fast = n;
        int slow = n ;

        while (true){
            slow = func(slow);
            fast = func(fast);
            fast = func(fast);

            if(fast==1)
            {
                return true;
            }
            if(fast==slow){
                return false;
            } 

        }
    return -1;
    }
};