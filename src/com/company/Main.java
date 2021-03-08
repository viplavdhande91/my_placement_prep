package com.company;


import java.io.*;
import java.util.*;
import java.lang.*;
class Main
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String s[]=br.readLine().trim().split(" ");
            int ar[]=new int[n];
            for(int i=0;i<n;i++)
                ar[i]=Integer.parseInt(s[i]);
            int one=0,zero=0;
            for(int i=0;i<n;i++)
            {
                if(ar[i]==0)
                    zero++;
                else
                    one++;
            }
            if(one==0 || zero==0)
                System.out.println("Zero length");
            if(one==zero)
            {
                System.out.print(0+ "to" +(n-1));
                break;
            }
            int zero1=0,one1=0;
            if(one>zero)
            {
                one1=one-zero;
                one=0;
                zero=0;
                for(int i=0;i<n;i++)
                {
                    if(ar[i]==1)
                        one++;
                    else if(ar[i]==0)
                        zero++;
                    if(one==one1)
                    {
                        System.out.println((i+zero+1)+ "to" +(n-1));
                        break;
                    }
                }
            }
            else
            {
                zero1=zero-one;
                zero=0;
                one=0;
                for(int i=0;i<n;i++)
                {
                    if(ar[i]==0)
                        zero++;
                    else if(ar[i]==1)
                        one++;
                    if(zero==zero1)
                    {
                        System.out.println((i+one+1)+ "to" +(n-1));
                        break;
                    }
                }
            }
        }
    }
}