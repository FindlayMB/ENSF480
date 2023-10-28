import java.util.ArrayList;
/**
 * Selection Sorter class
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class SelectionSort<E extends Number & Comparable<E>> implements Sorter<E> {
    public void sort(ArrayList<Item<E>> arr){
        int swapIndex = 0;
        for(int i = 0; i < arr.size()-1; i++){
            int minIndex = i;
            for(int j = i; j < arr.size(); j++){
                if(compare(arr, minIndex, j)){
                    minIndex = j;
                }
            }
            swap(arr,swapIndex,minIndex); 
        }

    }
}
