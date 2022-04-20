package com.stock.stock;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.*;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

@WebServlet(name = "DeleteProduct", value = "/delete")
public class DeleteProduct extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        int id = Integer.parseInt(request.getParameter("id"));
        Connection dbcon = dbcon();
        PreparedStatement st = null;
        try {
            st = dbcon.prepareStatement("DELETE FROM products WHERE id = ?");
            st.setString(1, String.valueOf(id));
            st.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        response.sendRedirect("display-products");
    }

    private Connection dbcon() {
        final String DRIVER_NAME = "oracle.jdbc.driver.OracleDriver";
        final String CONN_STR = "jdbc:oracle:thin:@%s:%s:ORCL";

        try {
            Class.forName(DRIVER_NAME);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }

        String host = "10.1.67.153";
        int port = 1521;

        Connection dbCon=null;

        String connectionString = String.format(CONN_STR, host, port);
        PreparedStatement getProductsStatement = null;
        try {
            dbCon = DriverManager.getConnection(connectionString, "MSC19PW28", "MSC19PW28");
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return dbCon;
    }

}
