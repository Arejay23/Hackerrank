public class Solution {
    /** A char popCharacter() method that pops and returns the character at the top of the stack instance variable.**/ 
    LinkedList<Character> stack=new LinkedList<>();
    LinkedList<Character> queue=new LinkedList<>();
    
    void pushCharacter(char ch){
        stack.addLast(ch);
    }
    
    void enqueueCharacter(char ch){
         queue.addLast(ch);
    }
    
    char popCharacter(){
        char q=stack.peekLast();
        stack.removeLast();
        return q;
    }
    
    char dequeueCharacter(){
        char w=queue.peekFirst();
        queue.removeFirst();
        return w;
    }
