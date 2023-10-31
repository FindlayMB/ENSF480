import java.util.ArrayList;
/**
 * Bubble Sorter class
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * <p>BubbleSorter.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    public void sort(ArrayList<Item<E>> arr){
        boolean sorted;
        for (int i = 0; i < arr.size()-1; i++) {
            sorted = true;
            for(int j = 0; j < arr.size() - i - 1; j++){
                if(compare(arr, j, j+1)){
                    swap(arr, j, j+1);
                    sorted = false;
                }
            }
            if(sorted == true)
                break;
        }
    }   
}
