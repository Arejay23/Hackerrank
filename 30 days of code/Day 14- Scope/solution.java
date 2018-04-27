// Add your code here
public Difference(int[] ele){
    this.elements=ele;
}
public void computeDifference(){
    int max=0;
    maximumDifference=0;
    for(int i=1;i<elements.length;i++){
       for(int j=i;j>=0;j--){
        max=Math.abs(elements[i]-elements[j]);
        if(max>maximumDifference){
            maximumDifference=max;
       }
        }
    }
}
