import java.util.ArrayList;
import java.util.Random;
/**
 * Main file that runs and tests MyVector and sorting classes
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * <p>DemoStrategyPattern.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
public class DemoStrategyPattern {
	public static void main(String[] args) {
		// Create an object of MyVector<Double> with capacity of 50 elements
		MyVector<Double> v1 = new MyVector<Double> (50);

		// Create a Random object to generate values between 0
		Random rand = new Random();  
       
		// adding 5 randomly generated numbers into MyVector object v1
	   	for(int i = 4; i >=0; i--) {
		   	Item<Double> item;
		   	item = new Item<Double> (Double.valueOf(rand.nextDouble()*100));
		  	v1.add(item);
	   	}
		
		System.out.println("---- TEST BUBBLE SORT ----");
	    // displaying original data in MyVector v1
       	System.out.println("The original values in v1 object are:");
		v1.display();
		
		// choose algorithm bubble sort as a strategy to sort object v1
		v1.setSortStrategy(new BubbleSorter<Double>());
		
		// perform algorithm bubble sort to v1 
		v1.performSort();
		
        System.out.println("\nThe values in MyVector object v1 after performing BoubleSorter is:");
		v1.display();
		
		// create a MyVector<Integer> object V2 
		MyVector<Integer> v2 = new MyVector<Integer> (50);
		
		// populate v2 with 5 randomly generated numbers
		for(int i = 4; i >=0; i--) {
			Item<Integer> item;
			item = new Item<Integer> (Integer.valueOf(rand.nextInt(50)));
			v2.add(item);
		}
		
		System.out.println("---- TEST INSERTION SORT ----");
		System.out.println("\nThe original values in v2 object are:");
		v2.display();
		v2.setSortStrategy(new InsertionSorter<Integer>());;
		v2.performSort();
		System.out.println("\nThe values in MyVector object v2 after performing InsertionSorter is:");
		v2.display();

		// create a MyVector<Integer> object V3 
		MyVector<Integer> v3 = new MyVector<Integer> (5);
		
		// populate v3 with 5 randomly generated numbers
		for(int i = 4; i >=0; i--) {
			Item<Integer> item;
			item = new Item<Integer> (Integer.valueOf(rand.nextInt(50)));
			v3.add(item);
		}
		
		System.out.println("---- TEST SELECTION SORT ----");
		System.out.println("\nThe original values in v3 object are:");
		v3.display();
		v3.setSortStrategy(new SelectionSorter<Integer>());;
		v3.performSort();
		System.out.println("\nThe values in MyVector object v3 after performing SelectionSorter is:");
		v3.display();
		
		System.out.println("---- TEST COPY ARRAYLIST CTOR ----");
		ArrayList<Item<Integer>> arr4 = new ArrayList<Item<Integer>>(5);
		
		// populate v4 with 5 randomly generated numbers
		for(int i = 4; i >=0; i--) {
			Item<Integer> item;
			item = new Item<Integer> (Integer.valueOf(rand.nextInt(50)));
			arr4.add(item);
		}

		System.out.println("\nThe original values in arr4 object are:");
		for(Item<Integer> i : arr4){
            System.out.print(i.getItem() + " ");   
        }
        System.out.println(); 

		// create a MyVector<Integer> object V4 
		MyVector<Integer> v4 = new MyVector<Integer>(arr4);
		System.out.println("\nThe original values in v4 object are:");
		v4.display();

		// Change the values in the Original Arraylist
		arr4.set(0, new Item<Integer>(1));
		arr4.set(1, new Item<Integer>(1));
		arr4.set(2, new Item<Integer>(1));
		arr4.set(3, new Item<Integer>(1));
		arr4.set(4, new Item<Integer>(1));

		System.out.println("\nThe new values in arr4 object are:");
		for(Item<Integer> i : arr4){
            System.out.print(i.getItem() + " ");   
        }
        System.out.println(); 
		System.out.println("\nThe new values in v4 object are:");
		v4.display();
	}
}
