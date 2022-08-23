import java.sql.Connection;
import java.sql.DriveManager;
class Main{
    public static void main(String[] a){
		try
		{
			Class.forName("com.mysql.jdb.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql//localhost:3306/academic_insti");
		}
    }
}
   