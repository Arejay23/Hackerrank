//do in java 7 for no time out error

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            String s=sc.next();
            char[] c=s.toCharArray();
            for(int j=0;j<s.length();j+=2){
                System.out.print(c[j]);
            }
            System.out.print(" ");
            for(int k=1;k<s.length();k+=2){
                System.out.print(c[k]);
            }
            System.out.println();
        }
    }
}
