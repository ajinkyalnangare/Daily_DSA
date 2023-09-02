class Solution{
    public int getCount(Node node, int bud)
    {
int level=1,count=0;
        Queue<Node> queue=new LinkedList<>();
        queue.offer(node);
        while(!queue.isEmpty() && bud>=level){
            int n=queue.size();
            for(int i=0;i<n;i++){
                Node temp=queue.poll();
                if(temp.left!=null) queue.offer(temp.left);
                if(temp.right!=null) queue.offer(temp.right);
                if(temp.left==null && temp.right==null && bud>=level){
                    count++;
                    bud -= level;
                }
            }
            level++;
        }
        return count;
    }
}
