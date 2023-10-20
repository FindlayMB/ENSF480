package ObserverExample;

public class HorizontalDisplay implements Observer {
    double temp;
    Subject weather;

    public HorizontalDisplay(Subject w) {
        weather = w;
        weather.register(this);
    }

    @Override
    public void update(double temp) {
        this.temp = temp;
        display();
    }

    public void display() {
        // code to display horizontally
    }
}
