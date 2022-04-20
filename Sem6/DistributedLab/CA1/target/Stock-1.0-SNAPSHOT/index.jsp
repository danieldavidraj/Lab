<%@ page contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
    <title>PS 4</title>
    <style>
        html, body {
            height: 100%;
        }

        html {
            display: table;
            margin: auto;
        }

        body {
            display: table-cell;
        }
    </style>
</head>
<body>
<h1><%= "Welcome to Stock Management System" %>
</h1>
<br/>
<div align="center">
    <a href="add_product.jsp">Add New Product</a><br/>
    <a href="display_products.jsp">Display all Products</a>
</div>

</body>
</html>