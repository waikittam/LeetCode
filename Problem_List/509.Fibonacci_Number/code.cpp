using namespace std;;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;

        int a = 0;
        int b = 1;
        int temp;
        
        for(int x = 2; x <= n; x++){
            temp = a + b;
            a = b;
            b = temp;
        }
  
        return temp;
    }
};