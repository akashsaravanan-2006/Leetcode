class Solution {
    public int calPoints(String[] operations) {
        Stack<Integer> stk = new Stack<>(); 
        int ans = 0;
        for(String k:operations)
        {
            if(k.equals("C") && !stk.isEmpty())
            stk.pop();                      
            else if(k.equals("D")) 
            {
                int x=stk.peek();
                stk.push(x * 2);                
            }
            else if(k.equals("+")) 
            {
                int x=stk.pop();           
                int y=stk.peek();          
                stk.push(x);                 
                stk.push(x+y);          
            }
           else
            stk.push(Integer.parseInt(k));   
        }
        for(int k:stk)
        ans=ans+k;
        return ans;
    }
}
