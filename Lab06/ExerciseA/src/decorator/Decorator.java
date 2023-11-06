package decorator;
import java.awt.Dimension;
import java.awt.Point;
/**
 * ENSF 480 Lab 6 Exercise A
 * @author Findlay Brown
 * File: Decorator.java
 */
public abstract class Decorator implements Component{
    Component cmp;
    int x;
    int y;
    int width;
    int height;

    public Decorator(Component cmp, int x, int y, int width, int height){
        this.cmp = cmp;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    public Decorator(Decorator d){
        this.cmp = d.cmp;
        this.x = d.x;
        this.y = d.y;
        this.width = d.width;
        this.height = d.height;
    }

    public Point getPoint(){
        return new Point(this.x, this.y);
    }

    public Dimension getDimension(){
        return new Dimension(this.width, this.height);
    }   
}
