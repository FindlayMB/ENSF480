import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer{

    private DoubleArrayListSubject data;

    public FiveRowsTable_Observer(DoubleArrayListSubject data){
        this.data = data;
    }

    public void update(ArrayList<Double> newArrayList){

    }

    public void display(){
        int i = 0;
        for (Double data : this.data.getData()) {
            System.out.print(data + " ");
            i++;
            if(i==5){
                System.out.println();
                i=0;
            }
        }
        System.out.println();
    }
}
