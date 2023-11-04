package decorator;

import java.awt.Color;
import java.awt.Graphics;

public class Text implements Component{
    
    int x;
    int y;
    String text;

    public Text(String text, int x, int y){
        this.text = text;
        this.x = x;
        this.y = y;
    }

    @Override
    public void draw(Graphics g){
        Color oldColor = g.getColor();
        g.setColor(Color.GREEN);
        g.drawString(this.text, this.x, this.y);
        g.setColor(oldColor);
    }



}
