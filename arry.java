
import java.util.Scanner;
class arry{
    public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.println("enter the number of you want in the arry");
int size= sc.nextInt();
int sum =0;
int [] arr= new int[size];
System.out.println("enter the arry of element");
for(int i=0;i<size;i++){
     arr[i]=sc.nextInt();
}
for(int i =0;i<size;i++){
sum=sum+arr[i];

}
System.out.println("the sum of arry is"+sum);

sc.close();
 
}
}
