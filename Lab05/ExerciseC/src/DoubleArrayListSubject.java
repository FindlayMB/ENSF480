import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject{

    private ArrayList<Observer> observers;

    private ArrayList<Double> data;

    public DoubleArrayListSubject(){
        this.data = new ArrayList<Double>();
    }

    public void addData(Double data){
        this.data.add(data);
    }

    public void setData(int index, Double data){
        this.data.set(index, data);
    }

    public void setData(Double data, int index){
        this.data.set(index, data);
    }

    public ArrayList<Double> getData(){
        return this.data;
    }

    public void populate(double[] data){
        this.data = new ArrayList<Double>(data.length);
        for (Double data2 : data) {
            this.data.add(data2);
        }
    }

    public void register(Observer o){

    }

    public void remove(Observer o){

    }

    public void notifyObserver(){

    }

    public void display(){

    }
}
