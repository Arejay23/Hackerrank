import java.util.*;

public class Solution {

    public static int minimum_index(int[] seq) {
        if (seq.length == 0) {
            throw new IllegalArgumentException("Cannot get the minimum value index from an empty sequence");
        }
        int min_idx = 0;
        for (int i = 1; i < seq.length; ++i) {
            if (seq[i] < seq[min_idx]) {
                min_idx = i;
            }
        }
        return min_idx;
    }

    static class TestDataEmptyArray {
        public static int[] get_array() {
            return new int[0];
        }
    }

    static class TestDataUniqueValues {
        public static int[] get_array() {
            int[] a=new int[]{1,2,3,4,5};
            return a;
        }

        public static int get_expected_result() {
            int [] b=TestDataUniqueValues.get_array();
            int n= b.length;
            int min=Integer.MAX_VALUE;
            int index=0;
            for(int i=0;i<n;i++){
                if(b[i]<min){
                    min=b[i];
                    index=i;
                }
            }

            return index;
        }
    }

    static class TestDataExactlyTwoDifferentMinimums {
        public static int[] get_array() {
            int[] a=new int[]{1,1,2,3,4,5};
            return a;
        }

        public static int get_expected_result() {
            int [] b=TestDataUniqueValues.get_array();
            int n= b.length;
            int min=Integer.MAX_VALUE;
            int index=0;
            for(int i=0;i<n;i++){
                if(b[i]<min){
                    min=b[i];
                    index=i;
                }
            }

            return index;
        }
        
    }

    
