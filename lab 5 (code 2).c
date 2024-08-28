public class Employee {
    private String name;
    private int id;
    private double salary;
    private String designation;


    public Employee() {
        this.name = "Unknown";
        this.id = 0;
        this.salary = 0.0;
        this.designation = "Unknown";
    }


    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
        this.salary = 0.0;
        this.designation = "Unknown";
    }


    public Employee(String name, int id, double salary, String designation) {
        this.name = name;
        this.id = id;
        this.salary = salary;
        this.designation = designation;
    }


    public void setDetails(String name, int id, double salary, String designation) {
        this.name = name;
        this.id = id;
        this.salary = salary;
        this.designation = designation;
    }


    public void setDetails(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public void displayDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("ID: " + this.id);
        System.out.println("Salary: " + this.salary);
        System.out.println("Designation: " + this.designation);
    }

    public static void main(String[] args) {

        Employee employee1 = new Employee();
        employee1.displayDetails();


        Employee employee2 = new Employee("Alice", 101);
        employee2.displayDetails();


        Employee employee3 = new Employee("Bob", 102, 50000.0, "Manager");
        employee3.displayDetails();

        employee3.setDetails("Charlie", 103, 60000.0, "Senior Manager");
        employee3.displayDetails();

        employee3.setDetails("David", 104);
        employee3.displayDetails();
    }
}
