/**
 * Subject interface
 * <p>ENSF 480 - Lab 5 Exercise C
 * <p>Subject.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public interface Subject {
    public void register(Observer o);

    public void remove(Observer o);

    public void notifyObserver();
}