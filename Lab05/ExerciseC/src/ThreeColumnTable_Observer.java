import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer{

    private DoubleArrayListSubject data;

    public ThreeColumnTable_Observer(DoubleArrayListSubject data){
        this.data = data;
    }
    public void update(ArrayList<Double> newArrayList){

    }
    public void display(){
        int i = 0;
        for (Double data : this.data.getData()) {
            System.out.print(data + "\t");
            i++;
            if(i==3){
                System.out.println();
                i=0;
            }
        }
        System.out.println();
    }
}
