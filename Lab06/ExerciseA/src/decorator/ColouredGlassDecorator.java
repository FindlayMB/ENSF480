package decorator;
import java.awt.AlphaComposite;
import java.awt.Color;
import java.awt.Composite;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Stroke;


public class ColouredGlassDecorator extends Decorator{
    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height){
        super(cmp,x,y,width,height);
    }

    @Override
    public void draw(Graphics g){
        Graphics2D g2 = (Graphics2D) g;
        Color oldColor = g2.getColor();
        Stroke oldStroke = g2.getStroke();
        Composite oldComp = g2.getComposite();
        g2.setColor(Color.yellow);
        g2.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1 *0.1f));
        g2.fill(new Rectangle(getPoint(),getDimension()));
        g2.setColor(oldColor);
        g2.setStroke(oldStroke);
        g2.setComposite(oldComp);
        this.cmp.draw(g);
    }
}
