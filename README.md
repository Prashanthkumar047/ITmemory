import java.util.Arrays;
public class Main{
public static int removeDuplicates(int array[], int n){
if(n==0 || n==1){
return n;
}
int[] temp = new int[n];
int j = 0;
for (int i=0; i<n-1; i++)
{
if(array[i] != array[i+1])
{
    temp[j++] = array[i];
    System.out.println(array[i]);
}        
}
temp[j++] = array[n-1];

//Changing original array
for(int i=0; i<j; i++){
array[i] = temp[i];
}
return j;
}
public static void main (String[] args) {
int array[] = {30,28,18,30,25,35,29,28,35,90};//unsorted array
Arrays.sort(array);//sorting array
int length = array.length;
length = removeDuplicates(array, length);
//printing array elements
for(int i=0; i<length; i++)
System.out.print(array[i]+" ");
}
}
