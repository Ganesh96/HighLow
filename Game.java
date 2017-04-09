import java.io.*;
import java.util.Random;
import java.util.Scanner;
public class Game {

public static String alpha(int length){
String alphabet = 
        new String("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"); 
int n = alphabet.length();
String result = new String(); 
Random r = new Random();
for (int i=0; i<length; i++) 
    result = result + alphabet.charAt(r.nextInt(n)); 
return result;
}
 
   public static void main( String args[]) throws IOException {
      Random random = new Random();
      Scanner scanner = new Scanner(System.in); 
      int number = random.nextInt(100);
      int guess = -1,r,h;
String s;
 String g="gachu";
       BufferedReader b=new BufferedReader (new InputStreamReader(System.in));
      System.out.print("Enter Your Name:");
    s=b.readLine();
   
if(g.equalsIgnoreCase(s))
{
r=number%10;
h=number/10;
h=65+h;
r=65+r;
System.out.println("Welcome Gachu!!God Mode Initiated \n SessionKey :"+ alpha(5) + (char)h  + (char)r);
}
else
{
System.out.println("Welcome " + s + "!! \n SessionKey :" + alpha(7));
}
      while (guess!=number) {
        System.out.print("Enter your guess: ");
         guess = scanner.nextInt();

 if (guess<number){ 
      System.out.println("Too low, please try again");
         }
else if (guess>number){
 System.out.println("Too high, please try again");   
        }
     else {
 System.out.println("Correct " + s + ", the number was " + number);
             }
      }
   }
}