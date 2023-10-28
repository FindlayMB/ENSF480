import java.util.ArrayList;
/**
 * ThreeColumnTable_Observer class
 * <p>ENSF 480 - Lab 5 Exercise C
 * <p>ThreeColumnTable_Observer.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class ThreeColumnTable_Observer implements Observer{

    private ArrayList<Double> arrayList;
    private DoubleArrayListSubject data;

    public ThreeColumnTable_Observer(DoubleArrayListSubject data){
        this.data = data;
        this.data.register(this);
    }

    @Override
    public void update(ArrayList<Double> newArrayList){
        this.arrayList = newArrayList;
        display();
    }

    public void display(){
        int i = 0;
        System.out.println("\nNotification to Three-Column Table Observer: Data Changed:");
        for (Double data : this.arrayList) {
            System.out.print(data + "\t");
            i++;
            if(i == 3){
                System.out.println();
                i = 0;
            }
        }
        System.out.println();
    }
}
