package ObserverExample;

import java.util.ArrayList;

public class Weather implements Subject {
    private double temp;
    private ArrayList<Observer> observers;

    public Weather(double t) {
        observers = new ArrayList<Observer>();
        temp = t;
    }

    public void register(Observer o) {
        observers.add(o);
        o.update(temp);
    }

    public void remove(Observer o) {

    }

    public void notifyObserver() {
        for (int i = 0; i < observers.size(); i++) {
            Observer o = observers.get(i);
            o.update(temp);
        }
    }

    public double getTemp() {
        return temp;
    }

    public void setTemp(double t) {
        temp = t;
        notifyObserver();
    }

}
