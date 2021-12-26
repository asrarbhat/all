import java.util.Map;
import java.util.HashMap;
public class File{
	public static void main(String[] args){
		Map<String,Integer> map=new HashMap<>();
		map.put("name",3);
		map.put("age",4);
		System.out.println(map);
		System.out.println(map.getOrDefault("year",44));
		System.out.println(map.get("age"));
		map.remove("age");
		System.out.println(map);

	}
}
