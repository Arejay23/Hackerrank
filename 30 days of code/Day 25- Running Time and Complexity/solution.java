import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        boolean flag=false;
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            int a=sc.nextInt();
            for(int j=2;j*j<=a;j++){
                if(a%j==0){
                    flag=true;
                }
            }
            if(a==1)
                flag=true;
             if(!flag){
                System.out.println("Prime");
            }
        else{
            System.out.println("Not prime");
            flag=false;
        }
        }
        
    }
}
