import java.util.ArrayList;
/**
 * OneRow_Observer class
 * <p>ENSF 480 - Lab 5 Exercise C
 * <p>OneRow_Observer.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class OneRow_Observer implements Observer{

    private ArrayList<Double> arrayList;
    private DoubleArrayListSubject data;

    public OneRow_Observer(DoubleArrayListSubject data){
        this.data = data;
        this.data.register(this);
    }

    @Override
    public void update(ArrayList<Double> newArrayList){
        this.arrayList = newArrayList;
        display();
    }
    
    public void display(){
        System.out.println("\nNotification to One-Row Observer: Data Changed:");
        for (Double data : this.arrayList) {
            System.out.print(data + "  ");
        }
        System.out.println();
    }
}
