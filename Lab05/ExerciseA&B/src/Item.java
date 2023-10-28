/**
 * Item class
 * <p>ENSF 480 - Lab 5 Exercise A and B
 * <p>Item.java
 * @author  Findlay Brown
 * @version 1.0
 * @since   27-10-2023
 */
class Item <E extends Number & Comparable<E>>{
	private E item;
	public Item(E value) {
		item = value;
	}
	
	public void setItem(E value){
		item = value;
	}
	
	public E getItem(){
		return item;
	}
}
