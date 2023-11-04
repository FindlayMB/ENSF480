package decorator;
import java.awt.BasicStroke;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Stroke;

public class BorderDecorator extends Decorator{
    final static BasicStroke dashed = new BasicStroke(1.0f,BasicStroke.CAP_BUTT, 
    BasicStroke.JOIN_BEVEL, 10.0f, new float[]{9.0f}, 0.0f);

    public BorderDecorator(Component cmp, int x, int y, int width, int height){
        super(cmp,x,y,width,height);
    }

    @Override
    public void draw(Graphics g){
        Graphics2D g2 = (Graphics2D)g;
        Stroke oldStroke = g2.getStroke();
        g2.setStroke(dashed);
        g2.draw(new Rectangle(getPoint(),getDimension()));
        g2.setStroke(oldStroke);
        this.cmp.draw(g);
    }
}
