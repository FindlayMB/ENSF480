import java.util.ArrayList;
/**
 * Sorter interface
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public interface Sorter<E extends Number & Comparable<E>>{
    public void sort(ArrayList<Item<E>> arr);
    
    /**
     * Helper Method to compare two elements of an ArrayList
     * @param arr       ArrayList of Item<E> object
     * @param index1    index of the first item
     * @param index2    index of the second item
     * @return the boolean result of the comparison arr[index1] > arr[index2]
     */
    default public boolean compare(ArrayList<Item<E>> arr, int index1, int index2){
        return arr.get(index1).getItem().compareTo(arr.get(index2).getItem()) > 0;
    }

    /**
     * Helper method to compare two Item<E> objects
     * @param o1 first Item<E> object
     * @param o2 second Item<E> object
     * @return the boolean result of the comparison o1 > o2
     */
    default public boolean compare(Item<E> o1, Item<E> o2){
        return o1.getItem().compareTo(o2.getItem()) > 0;
    }

    /**
     * Helper method to swap two elements of an ArrayList
     * @param arr       ArrayList of Item<E> object
     * @param index1    index of the first item
     * @param index2    index of the second item
     */
    default public void swap(ArrayList<Item<E>> arr, int index1, int index2){
        Item<E> temp = arr.get(index1);
        arr.set(index1, arr.get(index2));
        arr.set(index2, temp);
    }
    
}
