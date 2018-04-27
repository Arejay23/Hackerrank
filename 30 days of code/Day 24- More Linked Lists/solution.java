    public static Node removeDuplicates(Node head) {
      //Write your code here
        if(head ==null){
            return null;
        }
        Node a=head;
       while(a.next != null){
           if(a.data == a.next.data){
               a.next=a.next.next;
           }
           else
               a=a.next;
       }
        return head;
    }
