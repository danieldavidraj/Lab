package com.stock.stock;

import java.io.*;
import java.sql.*;
import javax.servlet.http.*;
import javax.servlet.annotation.*;

@WebServlet(name = "addProduct", value = "/add-product")
public class AddProduct extends HttpServlet {

    public void init() {

    }

    public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException {
        response.setContentType("text/html");
        String productName = request.getParameter("product_name");
        float productPrice = Float.parseFloat(request.getParameter("product_price"));
        String productCategory = request.getParameter("product_category");

        Connection dbcon = dbcon();
        String sql = "INSERT INTO products(name,price,category) "
                + "VALUES(?,?,?)";
        try {
            PreparedStatement pstmt = dbcon.prepareStatement(sql,
                    Statement.RETURN_GENERATED_KEYS);
            pstmt.setString(1, productName);
            pstmt.setFloat(2, productPrice);
            pstmt.setString(3, productCategory);
            int rowAffected = pstmt.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        response.sendRedirect("index.jsp");

    }

    public void destroy() {
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
            dbCon = DriverManager.getConnection(connectionString, "MSC19PW09", "MSC19PW09");
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return dbCon;
    }
}