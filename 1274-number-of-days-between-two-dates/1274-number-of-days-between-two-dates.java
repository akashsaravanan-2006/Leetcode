import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

class Solution {
    public int daysBetweenDates(String date1, String date2) {
        String[] start = date1.split("-");
        int y1=Integer.parseInt(start[0]);
        int m1=Integer.parseInt(start[1]);
        int d1=Integer.parseInt(start[2]);
        String[] end = date2.split("-");
        int y2=Integer.parseInt(end[0]);
        int m2=Integer.parseInt(end[1]);
        int d2=Integer.parseInt(end[2]);
        LocalDate startDate = LocalDate.of(y1, m1, d1); 
        LocalDate endDate = LocalDate.of(y2, m2, d2);

        long daysBetween = ChronoUnit.DAYS.between(startDate, endDate);

        return Math.abs((int)daysBetween);
    }
}