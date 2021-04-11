
import java.util.Arrays;

class demo
{
   public static void segreegate(int arr[])
   {
            int countzero = 0;
            int n = arr.length;
        //counting no of zeros
            for (int i=0; i<n; i++){
                if(arr[i]==0)
                {
                    countzero+=1;
                }
            }

        //fill up 0s
            for(int i =0;i<countzero;i++){
                arr[i]=0;
            }


        //fill up 1s    //countzero = 4
            for(int i = countzero ; i<n; i++){
                   arr[i]=1;
               }
       
   }
   



    public static void main(String[] args)
    {
        int arr[] = { 0,1,0,1,1,1,1,0,1,0 };
        segreegate(arr);
        System.out.println("Segregated array items:"+Arrays.toString(arr));
    }
}

/*

time Complexity = O(n)
space complexity= O(d)
 */
