package decorator;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Stroke;
/**
 * ENSF 480 Lab 6 Exercise A
 * @author Findlay Brown
 * File: ColouredFrameDecorator.java
 */
public class ColouredFrameDecorator extends Decorator{
    private int thickness;

    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness){
        super(cmp,x,y,width,height);
        this.thickness = thickness;
    }

    @Override
    public void draw(Graphics g){
        Graphics2D g2 = (Graphics2D) g;
        Color oldColor = g2.getColor();
        Stroke oldStroke = g2.getStroke();
        g2.setColor(Color.RED);
        g2.setStroke(new BasicStroke(thickness));
        g2.draw(new Rectangle(getPoint(),getDimension()));
        g2.setColor(oldColor);
        g2.setStroke(oldStroke);
        this.cmp.draw(g);
    }

}
