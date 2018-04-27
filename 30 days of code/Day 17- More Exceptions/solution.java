//Write your code here
class Calculator {
    public int power(int n,int p)throws Exception{
        //int b=p;
        if(n>=0 && p>=0){
            int a=1;
            for(int i=0; i<p; i++){
                a*=n;
            }
            return a;
        }
        else{
            throw new Exception("n and p should be non-negative");
        }
    }
}
