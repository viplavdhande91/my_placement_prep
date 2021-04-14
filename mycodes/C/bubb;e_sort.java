

public class demojava{


public static void main(String[] args) {
    
int a[] =  {98,45,26,77,36};

demojava bobj = new demojava();

bobj.bubblesort(a);


}



public static void bubblesort(int a[]){

    int  i;
    int  j;


    for (i = 0; i<a.length - 1 ;i++ )
     {
        for ( j=0 ;j < a.length-1-i ; j++) {
            int tmp; 

            if (a[j] > a[j+1])
            {
                tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;

            }

            
        }
        
    }

        System.out.println("sorted array" + Arrays.toString(a));




}


}