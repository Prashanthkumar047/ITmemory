import java.util.*;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner scnr = new Scanner(System.in);
		String userName;
		String songVerse;
		
		userName = scnr.nextLine();
		userName = userName.substring(1);
	    
	    songVerse = scnr.nextLine();
		//replace word Name in string with userName by using replace method
	    songVerse = songVerse.replace("Name",userName);
	    //printing 
	    System.out.println(songVerse);
		
	}
}
