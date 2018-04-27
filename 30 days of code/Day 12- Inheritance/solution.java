class Student extends Person{
	private int[] testScores;

    /*	
    *   Class Constructor
    *   
    *   @param firstName - A string denoting the Person's first name.
    *   @param lastName - A string denoting the Person's last name.
    *   @param id - An integer denoting the Person's ID number.
    *   @param scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
     Student(String fName, String lName, int id,int[] scores){
        super(fName,lName,id);
        this.testScores=scores;
    }
    /*	
    *   Method Name: calculate
    *   @return A character denoting the grade.
    */
    public char calculate(){
        int sum=0;
        int n=testScores.length;
        for(int k=0;k<n;k++){
            sum+=testScores[k];
        }
        double average=sum/n;
        if(average>89){
            return 'O';
        }
        else if(average>79){
            return 'E';
        }
        else if(average>69){
            return 'A';
        }
        else if(average>54){
            return 'P';
        }
        else if(average>39){
            return 'D';
        }
        else return 'T';
    }
    // Write your method here
}
