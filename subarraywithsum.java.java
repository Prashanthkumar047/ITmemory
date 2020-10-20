//sub array with given sum
import java.util.*;
public class Main
{
  public static void fun (int arr[], int sum)
  {
    int s = 0;
    int i = 0, j = 0, f = 0;

    for (i = 0; i < arr.length; i++)
      {
	for (j = i; j < arr.length; j++)
	  {
	    s = s + arr[j];
	    if (s == sum)
	      {
		System.out.print (i + 1 + " ");
		System.out.println (j + 1);
		f = 1;
		break;
	      }
	  }
	j = 0;
	s = 0;

      }
  }
  public static void main (String[]args)
  {
    int arr[] = { 1, 2, 3, 7, 5 };
    int sum = 15;
    fun (arr, sum);

  }
}
