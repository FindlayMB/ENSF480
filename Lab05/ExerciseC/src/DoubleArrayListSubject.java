import java.util.ArrayList;
/**
 * DoubleArrayListSubject class
 * <p>ENSF 480 - Lab 5 Exercise C
 * <p>DoubleArrayListSubject.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class DoubleArrayListSubject implements Subject{

    private ArrayList<Observer> observers;

    private ArrayList<Double> data;

    public DoubleArrayListSubject(){
        this.observers = new ArrayList<Observer>();
        this.data = new ArrayList<Double>();
    }

    public void addData(Double d){
        this.data.add(d);
    }

    public void setData(int index, Double data){
        this.data.set(index, data);
    }

    public void setData(Double data, int index){
        this.data.set(index, data);
        notifyObserver();
    }

    public ArrayList<Double> getData(){
        return this.data;
    }

    public void populate(double[] newData){
        this.data = new ArrayList<Double>(newData.length);
        for (Double d : newData) {
            this.data.add(d);
        }
    }

    public void register(Observer o){
        this.observers.add(o);
        o.update(this.data);
    }

    public void remove(Observer o){
        this.observers.remove(o);
    }

    public void notifyObserver(){
        observers.forEach(o -> o.update(data));
    }

    public void display(){
        if(data.size() != 0){
            data.forEach(x -> System.out.print(x + " "));
            System.out.println();
        }
        else{
            System.out.println("Empty List...");
        }
    }
}
