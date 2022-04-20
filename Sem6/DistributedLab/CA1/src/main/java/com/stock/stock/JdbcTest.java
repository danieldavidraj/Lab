package com.stock.stock;

import java.sql.*;

public class JdbcTest {
    public static final String DRIVER_NAME = "oracle.jdbc.driver.OracleDriver";
    public static final String CONN_STR = "jdbc:oracle:thin:@%s:%s:ORCL";
    private static final String GET_PRODUCTS_SQL = "SELECT * from USERNAME";


    public static void JdbcConnect() {
        try {
            Class.forName(DRIVER_NAME);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }

        String host = "10.1.67.153";
        int port = 1521;

        Connection dbConn;

        String connectionString = String.format(CONN_STR, host, port);
        PreparedStatement getProductsStatement = null;
        try {
            dbConn = DriverManager.getConnection(connectionString, "MSC19PW28", "MSC19PW28");

            getProductsStatement = dbConn.prepareStatement(GET_PRODUCTS_SQL);

        } catch (SQLException e) {
            e.printStackTrace();
        }

        ResultSet queryResult;
        try {
            queryResult = getProductsStatement.executeQuery();
            while(queryResult.next()) {
                System.out.println(queryResult.getString("NAME"));
            }
        } catch (SQLException e) {
            System.out.println("Exception");
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        JdbcConnect();
    }
}