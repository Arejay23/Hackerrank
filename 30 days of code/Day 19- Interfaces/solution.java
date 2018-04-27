/** The implementation for the divisorSum method must be public and take an integer parameter, n, and return the sum of all it divisors**/
class Calculator implements AdvancedArithmetic{
    public int divisorSum(int n){
        int sum=0;
        int b= (int)n/2;
        for(int i=1;i<=b;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        return sum+n;
    }
}
