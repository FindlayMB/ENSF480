import java.util.ArrayList;
/**
 * Insertion Sorter class
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E>{
    public void sort(ArrayList<Item<E>> arr){
        for(int i = 1; i < arr.size(); i++){
            Item<E> keyItem = arr.get(i);
            int index = i - 1;
            while (index >= 0 && compare(arr.get(index), keyItem)) {
                arr.set(index+1, arr.get(index));
                index--;
            }
            arr.set(index+1, keyItem);

        }
        
    }


}
