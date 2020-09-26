package oopsAssignment;
import java.time.LocalDate;
import java.time.Month;
import java.time.temporal.ChronoUnit;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//24-May-2017, change this to your desired Start Date
		LocalDate dateBefore = LocalDate.of(1999, Month.SEPTEMBER, 3);
	        //29-July-2017, change this to your desired End Date
		LocalDate dateAfter = LocalDate.of(2025, Month.MARCH, 17);
		long noOfDaysBetween = ChronoUnit.DAYS.between(dateBefore, dateAfter);
		System.out.println(noOfDaysBetween);
	}

}
