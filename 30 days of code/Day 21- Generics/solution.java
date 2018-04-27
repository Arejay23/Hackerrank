    /**
    *    Method Name: printArray
    *    Print each element of the generic array on a new line. Do not return anything.
    *    @param A generic array
    **/
    
    // Write your code here
public <T> void printArray(T[] arr){
    int n=arr.length;
    for(int i=0;i<n;i++){
        System.out.println(arr[i]);
    }
}
