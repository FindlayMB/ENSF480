package ObserverExample;

public class VerticalDisplay implements Observer {
    double temp;
    Subject weather;

    public VerticalDisplay(Subject w) {
        weather = w;
        weather.register(this);
    }

    @Override
    public void update(double temp) {
        this.temp = temp;
        display();
    }

    public void display() {
        // code to display vertically
    }

}
