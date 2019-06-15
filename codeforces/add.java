import java.util.Scanner;
class add{
  public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    double f,s,ans;
    System.out.println("enter first number");
    f=input.nextDouble();
    System.out.println("enter second number");
    s=input.nextDouble();
    ans=f+s;
    System.out.println(ans);
  }
}
