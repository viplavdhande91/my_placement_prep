
//name variable chandrakant cannot be accesible by outer classes ..thats the benefit of Encapsulation
public class Person{

private String name = "chandrakant";


public static void main(String[] args) {
	System.out.println("Hello world");
}


public void setname( String name){
   this.name = name;

}


public String getname(){
 return name;
}


}