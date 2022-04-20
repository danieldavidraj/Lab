<%@ page contentType="text/html;charset=UTF-8" language="java" %>

<head>
    <title>Add Products</title>
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
<p>Display</p>
<form action = "add-product" method = "POST">
    Product Name: <input type = "text" name = "product_name" value="product">
    <br />
    Product Price: <input type="number" step="0.01" name = "product_price" value=10 />
    <br/>
    Product Category: <input type = "text" name = "product_category" value="cat"/>
    <br/>
    <input type = "submit" value = "Submit" />
</form>
<a href="index.jsp"> << Back </a>
</body>
</html>