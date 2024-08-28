public class Person {
    private String name;
    private int age;
    private String gender;
    private String address;


    public Person() {
        this.name = "Unknown";
        this.age = 0;
        this.gender = "Unknown";
        this.address = "Unknown";
    }
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
        this.gender = "Unknown";
        this.address = "Unknown";
    }


    public Person(String name, int age, String gender, String address) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.address = address;
    }


    public void setDetails(String name, int age, String gender, String address) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.address = address;
    }


    public void setDetails(String name, int age) {
        this.name = name;
        this.age = age;
    }


    public void displayDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Gender: " + this.gender);
        System.out.println("Address: " + this.address);
    }

    public static void main(String[] args) {

        Person person1 = new Person();
        person1.displayDetails();


        Person person2 = new Person("Alice", 30);
        person2.displayDetails();


        Person person3 = new Person("Bob", 25, "Male", "123 Street Name");
        person3.displayDetails();


        person3.setDetails("Charlie", 40, "Male", "456 Another St");
        person3.displayDetails();


        person3.setDetails("David", 35);
        person3.displayDetails();
    }
}
