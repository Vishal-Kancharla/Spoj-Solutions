import java.util.Scanner;

class ABSYS {
	public static void main(String[] args){
  try{
    Scanner sc =  new Scanner(System.in);
    int t = sc.nextInt();
    int pans;
    sc.nextLine();
    while(t!=0){
    t--;
    String s = sc.nextLine();
    int p = s.indexOf("+");
    int e = s.indexOf("=");
    String a = s.substring(0,p-1);
    String b =s.substring(p+2,e-1);
    String c = s.substring(e+2);
    if(a.contains("machula")){
        pans = Integer.parseInt(c) - Integer.parseInt(b);
        a = Integer.toString(pans);
    	System.out.println(a + " + " + b + " = " + c);
    }
     else if(b.contains("machula")){
        pans = Integer.parseInt(c) - Integer.parseInt(a);
        b = Integer.toString(pans);
    	System.out.println(a + " + " + b + " = " + c);
    }
    else {
        pans = Integer.parseInt(a) + Integer.parseInt(b);
        c = Integer.toString(pans);
    	System.out.println(a + " + " + b + " = " + c);
    }
    }
	}
	catch(Exception e){
		return;
	}
}
}