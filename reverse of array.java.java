import java.util.*;

public class Main{
    public static void main(String[] args){
        int arr[] = {1,2,3,4,5,6,7,8};
        int j = arr.length;
        
        for(int i = 0 ;i<(arr.length/2);i++)
        {
            //swaps the elements
            int temp = arr[i];
            arr[i] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        
        for(int i = 0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}