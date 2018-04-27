import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int ans=0;
        int c;
        int a=sc.nextInt();
        for(int i=0;i<a;i++){
            int n=sc.nextInt();
            int k=sc.nextInt();
            for(int j=1;j<n;j++){
                for(int l=j+1;l<=n;l++){
                    c=j&l;
                    if(c>ans && c<k){
                        ans=c;
                    }
                }
            }
            System.out.println(ans);
            ans=0;
        }
    }
}
