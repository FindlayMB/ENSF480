import java.util.ArrayList;

public class OneRow_Observer implements Observer{
    
    private DoubleArrayListSubject data;

    public OneRow_Observer(DoubleArrayListSubject data){
        this.data = data;
    }

    public void update(ArrayList<Double> newArrayList){

    }
    
    public void display(){
        for (Double data : this.data.getData()) {
            System.out.print(data + " ");
        }
        System.out.println();
    }
}
