import java.util.ArrayList;
/**
 * FiveRowsTable_Observer class
 * <p>ENSF 480 - Lab 5 Exercise C
 * <p>FiveRowsTable_Observer.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class FiveRowsTable_Observer implements Observer{

    private ArrayList<Double> arrayList;
    private DoubleArrayListSubject data;

    public FiveRowsTable_Observer(DoubleArrayListSubject data){
        this.data = data;
        this.data.register(this);
    }

    @Override
    public void update(ArrayList<Double> newArrayList){
        this.arrayList = newArrayList;
        display();
    }

    public void display(){
        System.out.println("\nNotification to Five-Rows Table Observer: Data Changed:");
        
        for(int i=0; i<5;i++){
            for(int j=i; j <= this.arrayList.size()-1; j = j + 5){
                System.out.print(this.arrayList.get(j)+"\t");
            }
            System.out.println();
        }
    }
}
