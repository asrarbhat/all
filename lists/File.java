import java.util.List;
import java.util.ArrayList;
public class File{
	public static void main(String[] args){
		List<Integer> list=new ArrayList<>();
		list.add(2);
		list.add(3);
		list.add(4);
		System.out.println(list);
		list.remove(list.size()-1);
		System.out.println(list);
		list.add(0,new Integer(333));
		list.remove(2);
		System.out.println(list);
	}
}
