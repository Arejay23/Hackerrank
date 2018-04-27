	public static int getHeight(Node root){
      //Write your code here
        int countl=0;
        int countr=0;
        Node x=root;
        if(root.left!=null){
            countl=getHeight(root.left)+1;
       }
        if(root.right!=null){
            countr=getHeight(root.right)+1;
        }
        if(countl>=countr){
            return countl;
        }
        else
            return countr;
    }
