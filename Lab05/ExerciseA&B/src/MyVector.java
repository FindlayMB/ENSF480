import java.util.ArrayList;

/**
 * MyVector clas
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class MyVector<E extends Number & Comparable<E>> {  
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;
    
    public MyVector(int size){
        this.storageM = new ArrayList<Item<E>>(size);
    }

    public MyVector(ArrayList<Item<E>> arr){
        this.storageM = new ArrayList<Item<E>>(arr.size()+1);
        this.storageM.addAll(arr);
    }

    public void add(Item<E> value){
        this.storageM.add(value);
    }

    public void setSortStrategy(Sorter<E> s){
        this.sorter = s;
    }

    public void performSort(){
        this.sorter.sort(this.storageM);
    }

    public void display(){
        for(Item<E> i : storageM){
            System.out.print(i.getItem() + " ");   
        }
        System.out.println(); 
    }
    
}
