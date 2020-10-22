// Java program to find three numbers 
// such that sum of two makes the 
// third element in array 
import java.util.Arrays; 

public class Main { 

	// utility function for finding 
	// triplet in array 
	static void findTriplet(int arr[], int n) 
	{ 
	    int count = 0,sum=0;
		// sort the array 
		Arrays.sort(arr); 
        
        for(int i =0;i<n-1;i++){
            sum = arr[i]+arr[i+1];
            for(int j = 0;j<n;j++){
                if(arr[j]==sum){
                    count++;
                }
            }
        }
        System.out.println(count);
	         
	} 

	// driver program 
	public static void main(String args[]) 
	{ 
		int arr[] = { 1,5,3,2};
		findTriplet(arr, 4); 
	} 
} 
// This code is contributed by Sumit Ghosh 
