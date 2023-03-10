class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack=new Stack<Character>();
        for(char i:s.toCharArray())
        {
            if(i=='(' || i=='{' || i=='[') 
                stack.push(i);
            else
            {
                if(stack.isEmpty()) return false;
                char ch=stack.pop();
                if((i==')' && ch=='(') || (i==']' && ch=='[') ||(i=='}' && ch=='{'))
                    continue;
                else return false;
            }
        }
        return stack.isEmpty();
    }
}