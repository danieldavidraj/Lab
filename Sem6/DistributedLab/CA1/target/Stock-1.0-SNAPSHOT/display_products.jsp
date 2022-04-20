<%--
  Created by IntelliJ IDEA.
  User: 19pw28
  Date: 4/12/2022
  Time: 14:08
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>

<html>
<head>
    <title>Add Products</title>
    <style>
        table, th, td{
            border: 1px solid
        }
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
<body >
<div align="center">
    <h1>
        All Products
    </h1>
</div>

<table>
    <thead>
    <tr>
        <td>Product Name</td>
        <td>Product Price</td>
        <td>Product Category</td>
        <td>Action</td>
    </tr>
    </thead>
    <tbody>
    <c:forEach var="product" items="${productList}">
        <tr>
            <td>${product.NAME}</td>
            <td>${product.PRICE}</td>
            <td>${product.CATEGORY}</td>
        </tr>
    </c:forEach>
    </tbody>

</table>
<br>
<a href="index.jsp"> << Back </a>
</body>
</html>

<html>
