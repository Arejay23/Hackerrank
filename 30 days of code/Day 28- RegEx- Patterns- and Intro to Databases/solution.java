import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String emailRegEx = ".+@gmail\\.com$";
        Pattern pattern = Pattern.compile(emailRegEx);
        List<String> list = new ArrayList();
        for (int i = 0; i < N; i++){
            String name = in.next();
            String email = in.next();
            Matcher matcher = pattern.matcher(email);
            if (matcher.find()){
                list.add(name);
            }
        }
         Collections.sort(list);
        for (String name : list){
            System.out.println(name);
        }
    }
}
