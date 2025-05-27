class Solution {
public:
    int reverse(int x) {
        // start with simple reverse, then look into complexity
        int a = 0;
        int temp = 0;
        
        // Since x keeps on reducing in every iteration
        while(x != 0){
            // if x keeps on reducing from behind, then below formula will show 123 shredding as 3 -> 2 -> 1
            temp = x%10;

            // returning 0 if a is greater than INT_MAX/10 or lesser than INT_MIN/10
            if (a > INT_MAX / 10 || a < INT_MIN / 10) {
                return 0;
            }
            // increasing "a" with multiple of 10 and then adding "temp"
            // 3 -> 30+2 -> 320+1
            else {
                a = a*10 + temp;

                // decreasing x by multiple of 10, to take out the last value
                x = x/10;
            }
            
        }

    return a;
    }
};