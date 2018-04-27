static LinkedList<Node> nod=new LinkedList<Node>();
static void levelOrder(Node root){
    
    nod.add(root);
    while(!nod.isEmpty())
    {
        Node n= nod.removeFirst();
        System.out.print(n.data+" ");
        if (n.left != null)
            nod.addLast(n.left);
        if (n.right != null)
            nod.addLast(n.right);
    }
}
