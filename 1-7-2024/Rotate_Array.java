
import java.util.*;
class Rotate_Array {
    public static void main(String[] args) {
        
       int arr[]= {1,2,3,4,5};
       int arr2[] = new int[arr.length];
       
       int k=2;
       int j= arr.length-k;
       for(int i=0 ;i<arr.length;i++){
           if(j>arr.length-1){
               j=0;
           }
           
           arr2[i]=arr[j];
          
           j++;
       }
       
       System.out.println(Arrays.toString(arr2));
    }
}