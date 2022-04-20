/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package thread;

/**
 *
 * @author 19pw09
 */
class MyJob extends Thread {
    String text;

    MyJob(String txt) {
        text = txt;
    }

    public void run() {
        for(int i = 0; i < 100; i++) {
            System.out.println(text);
        } 
    }

    public static void main(String[] args) {
        MyJob m1 = new MyJob("Hello");
        MyJob m2 = new MyJob("World");
        Thread t1 = new Thread(m1);
        Thread t2 = new Thread(m2);
        
        t1.start();
        t2.start();
        try {
            t1.join();
        } catch(InterruptedException e) {
            System.out.print(e);
        }
    }
}
    

