//Write a program to reverse an array or string


import java.util.*;
import java.lang.*;
import java.io.*;


class demo {
    public static void main(String[] args) {
     
     ArrayList<Integer> a = new ArrayList<Integer>();

     a.add(134);
     a.add(654);
     a.add(776);
     a.add(5);
     a.add(13444);


System.out.println("Orignal array" + a);


int i = 0;
int j = a.size()-1;


while(i < j){
    int temp = a.get(i);
    
    a.set(i,a.get(j));

    a.set(j,temp);

    i++;
    j--;



}

System.out.println("reversed array" + a);





    }

    
}
