import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int[] a=new int[6];
        int fine;
        for(int i=0;i<6;i++){
            a[i]=sc.nextInt();
        }
        if(a[2]-a[5]<=0){
            if(a[1]-a[4]<=0 || a[2]-a[5]<0){
                if(a[0]-a[3]<=0 || a[2]-a[5]<0 || a[1]-a[4]<0){
                    fine=0;
                }
                else
                    fine=(a[0]-a[3])*15;
            }
            else
                fine=(a[1]-a[4])*500;
        }
        else
            fine=10000;
        System.out.println(fine);
    }
}
