package com.stock.stock;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.*;
import java.io.IOException;
import java.sql.*;
import java.util.ArrayList;
import java.util.List;

@WebServlet(name = "DisplayProducts", value = "/display-products")
public class DisplayProducts extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        Connection con  = dbcon();
        Statement st = null;
        try {
            st = con.createStatement();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        ResultSet res = null;
        try {
            res = st.executeQuery("SELECT * FROM  PRODUCTS");
            System.out.println(res);
        } catch (SQLException e) {
            e.printStackTrace();
        }

        List<Product> productList = new ArrayList<Product>();

        while (true) {
            try {
                if (!res.next()) break;
            } catch (SQLException e) {
                e.printStackTrace();
            }

            String productName = null;
            try {
                productName = res.getString("NAME");
            } catch (SQLException e) {
                e.printStackTrace();
            }
            float productPrice = 0;
            try {
                productPrice = res.getFloat("PRICE");
            } catch (SQLException e) {
                e.printStackTrace();
            }
            String productCategory = null;
            try {
                productCategory = res.getString("CATEGORY");
            } catch (SQLException e) {
                e.printStackTrace();
            }
            System.out.println(productName);
            System.out.println(productPrice);
            System.out.println(productCategory);

            productList.add(new Product(1, productName, productPrice, productCategory));
        }

        String destination = "display_products.jsp";
        RequestDispatcher requestDispatcher = request.getRequestDispatcher(destination);
        request.setAttribute("productList", productList);
        requestDispatcher.forward(request, response);

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
