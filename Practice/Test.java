import java.util.*;

public class Test {
    static void check(int a){
        try {
            System.out.println(a/0);
        }
        catch(Exception e){
            System.out.println("Caught in Exception");
        }
        // catch(ArithmeticException ae){
        //     System.out.println("Caught in Arithmatic exception");
        // }
    }

    public static void main(String args[]){
        A a = new A();
        B b = new B();
        a.check();
        b.check();
    }
}

class A {
    A(){
        System.out.println("A is called");
    }

    public void check(){
        System.out.println("hello");
    }
}

class B extends A {

    
    public void check(){
        System.out.println("lello");
    }
}


