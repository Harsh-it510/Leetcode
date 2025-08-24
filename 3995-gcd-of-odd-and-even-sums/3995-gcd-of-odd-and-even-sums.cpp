class Solution {
public:

    int gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;

        int i=1;
        int j=2;

        while(n != 0){
            sumOdd += i;
            sumEven += j;
            i+=2;
            j+=2;
            n--;
        }
        return gcd(sumEven, sumOdd);
    }
};