import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        int countn=0;
        int counto=0;
        while(n>0){
            int remainder=n%2;
            if(remainder==0){
                countn=0;
            }
            else {
                countn++;
                if(counto<countn) {
                    counto=countn;
                }
            }
            
            n=n/2;
        }
        
        //if(counto<countn)System.out.println(countn);
        System.out.println(counto);
    }
}
