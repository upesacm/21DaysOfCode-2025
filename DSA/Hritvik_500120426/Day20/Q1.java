import java.util.*;

public class question1 {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        students.add(new Student("Alice", 85));
        students.add(new Student("Bob", 92));
        students.add(new Student("Charlie", 78));

        students.sort((s1, s2) -> Integer.compare(s2.grade, s1.grade));

        for (Student s : students) {
            System.out.println(s.name + ": " + s.grade);
        }
    }

    static class Student {
        String name;
        int grade;

        Student(String name, int grade) {
            this.name = name;
            this.grade = grade;
        }
    }
}
