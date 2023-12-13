import java.net.SocketPermission;

import javax.sound.sampled.SourceDataLine;

public class objectClassDemo {
    String name;
    long phNumber;
    objectClassDemo(String st, long x){
        name = st;
        phNumber = x;
    }
    public void setValue(String x, long n){
        name = x;
        phNumber = n;
    }
    public void display(){
        System.out.println("Name: "+ name);
        System.out.println("PHNUMBER: "+ phNumber);
    }
}
