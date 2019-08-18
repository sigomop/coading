/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	 Scanner dd=new Scanner(System.in);
      
     int t;
t=dd.nextInt();
         for (int j = 0; j < t; j++) {
             int n;
              n=dd.nextInt();
              int[] a=new int[n]; int[] b=new int[n];
              for(int i=0;i<n;i++)
               a[i]=dd.nextInt();
               for(int i=0;i<n;i++)
               b[i]=dd.nextInt();
         long sum=0;int e=0;int r=0;
         for(int i=0;i<n;i++){
               sum+=a[i]+b[i];
         if(a[i]%2==0){
             e++;
         } if(b[i]%2==0){
             r++;
         }
         }int ss;
         if(e>r){
            ss=e-r;
         }else{
             ss=r-e;
         }
               
               System.out.println((sum-ss)/2);
}
        }}

