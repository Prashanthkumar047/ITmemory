import java.util.*;
import java.util.Scanner;
public class Main
{
    public static boolean balanced(String exp){
        Stack<Character> s = new Stack<>();
        int length  = exp.length();
        
        for(int i=0;i<length;i++)
        {
            char curr = exp.charAt(i);
            
            
            
            
            if(curr == '{' || curr == '(' || curr == '['){
                s.push(curr);
            }
            else if(curr=='}'|| curr ==']' || curr == ')'){
                 char popped  = ' ';
                try{
                    popped = s.pop();
                }
                catch (EmptyStackException e){
                    return false;
                }
            
            if(popped=='{' && curr!='}'){
                return false;
            }
            else if(popped == '('&&curr!=')'){
                return false;
            }
            else if(popped =='[' && curr!=']'){
                return false;
            }
        }
        }
    
    if(!s.isEmpty()){
        return false;
    }
    return true;

    }
	public static void main(String[] args) {
		String st = "(),[],{}";
	    boolean temp ;
	    temp = balanced(st);
	    System.out.print(temp);
		
	}
}
