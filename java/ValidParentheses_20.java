class Solution {
    public boolean isValid(String s) {
    	Stack<Character> parentheses = new Stack<>();
    	
    	int length = s.length();
    	char[] charArray = s.toCharArray();
    	
    	char singleBracket;
    	for(int i=0; i<length; i++) {
    		singleBracket = charArray[i];
    		
    		if(singleBracket == '(' || singleBracket == '{' || singleBracket == '[') {
    			parentheses.push(singleBracket);
    		}else {
    			if(!parentheses.isEmpty()) {
    				char leftBracket = parentheses.pop();
        			
        			if(singleBracket == ')') {
        				if(leftBracket != '(')
        				return false;
        			}else if(singleBracket == '}') {
        				if(leftBracket != '{')
        					return false;
        			}else if(singleBracket == ']') {
        				if(leftBracket != '[')
        					return false;
        			}
    			}
    			else
    				return false;
    		}
    	}
    	
    	return parentheses.isEmpty();
    }
}