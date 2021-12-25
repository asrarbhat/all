import java.util.Scanner;
class IO{
	public static void main(String[] args){
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		scan.nextLine();//because nextInt doesn't consume \n
		String str=scan.nextLine();
		System.out.println(n+" "+str);
}
}
