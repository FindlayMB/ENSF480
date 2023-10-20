package ObserverExample;

public class Client {
    public static void main(String[] args) {
        Weather w = new Weather(34.5);
        HorizontalDisplay h = new HorizontalDisplay(w);
        VerticalDisplay v = new VerticalDisplay(w);

        w.setTemp(55);

        h.display(); // Displays horizontally
        v.display(); // Displays Vertically

    }

}
