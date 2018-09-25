import java.util.*;
import java.lang.*;
import java.io.*;


class Fib
{
	public static void main (String[] args) throws java.lang.Exception
	{
		byteFib();
		shortFib();
		intFib();
		longFib();	
		
	}
	
	
	static long fib(int n){
		 int i = 0;
    	 long x = 0;
    	 long y = 1;
		 if (n<= 0) return 0;

    	for(i = 0; i< n-1; i++)
    	{
    		 y = x + y;
    		 x = y - x;

		}
    	return y;
		
	}
	
	static void byteFib(){
			int i;
			byte x = 0;
    		byte y = 1;
    		for(i = 0; x <= y; i++)
		    {
		        y = (byte) (x + y);
		        x = (byte) (y - x);
		    }
		    System.out.println("Byte (byte)\n");
		    System.out.println("Maximum value: \n" + Byte.MAX_VALUE);
		    System.out.println("Last valid value: \n" + x) ;
		    System.out.println("Value out of bounds: \n" + fib(i + 1));
		    System.out.println("Value of n: \n" + i +"\n");
		    
		
	}
	
	static void shortFib(){
			int i;
			short x = 0;
    		short y = 1;
    		for(i = 0; x <= y; i++)
		    {
		        y = (short) (x + y);
		        x = (short) (y - x);
		    }
		    System.out.println("Short (short)\n");
		    System.out.println("Maximum value: \n" + Short.MAX_VALUE);
		    System.out.println("Last valid value: \n" + x) ;
		    System.out.println("Value out of bounds: \n" + fib(i + 1));
		    System.out.println("Value of n: \n" + i +"\n");
		
	}
	
	static void intFib(){
			int i;
			int x = 0;
    		int y = 1;
    		for(i = 0; x <= y; i++)
		    {
		        y = x + y;
		        x = y - x;
		    }
		    System.out.println("Integer (int)\n");
		    System.out.println("Maximum value: \n" + Integer.MAX_VALUE);
		    System.out.println("Last valid value: \n" + x) ;
		    System.out.println("Value out of bounds: \n" + fib(i + 1));
		    System.out.println("Value of n: \n" + i +"\n");
		
	}
		static void longFib(){
			int i;
			int x = 0;
    		int y = 1;
    		for(i = 0; x <= y; i++)
		    {
		        y = x + y;
		        x = y - x;
		    }
		    
		    System.out.println("Long (long)\n");
		    System.out.println("Maximum value: \n" + Long.MAX_VALUE);
		    System.out.println("Last valid value: \n" + x) ;
		    System.out.println("Value of n: \n" + i + "\n");
		
	}	
	
}