public class Main
{
  int med (String  st)
  {
    int len = st.length (), i, c = 0, t = 0, start, end = 0,res=0;
      len = len - 1;
    char[] a = st.toCharArray ();
    for (i = 0; i < len; i++)
      {
	if (a[t] == a[(len - c)])
	  {
	    t++;
	    c++;

	  }
	else
	  {
	    break;
	  }

      }
    len = len - c;
    if (len <= 0)
      {
	System.out.print (a);
	return 0;
      }
    len = len - 1;
    c = 0;
    end = len;
    start = 0;
    t = 0;
    for (i = 0; i < ((len / 2) + 1); i++)
      {
	if (a[t] == a[len - c])
	  {
	    t++;
	    c++;


	  }
	else if (a[t + 1] == a[len - c])
	  {
	    t++;
	    start = t;
	    end = len;

	  }
      }
    for (i = start; i <= end; i++)
      {
        System.out.print(a[i]);
      }
     
      return 0;
  }
  public static void main (String[]args)
  {
      String st = "babad";
    Main obj = new Main ();
    obj.med (st);
  }
}
