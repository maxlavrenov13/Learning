CREATE TABLE order_items (
order_id TEXT,
product_id TEXT,
quantity INTEGER,
unit_price DECIMAL,
discount_percentage DECIMAL,
discount_amount DECIMAL,
gross_sales DECIMAL,
tax_amount DECIMAL,
shipping_cost DECIMAL,
net_sales DECIMAL,
product_cost DECIMAL,
profit DECIMAL
)
SELECT COUNT(*) FROM customer_master
COPY public.order_items
FROM'E:/doc/order_items.csv' 
WITH (FORMAT csv, HEADER true);
SELECT customer_master.customer_name, COUNT(DISTINCT ecommerce_sales_customers.order_id) as total_orders, SUM(ecommerce_sales_customers.profit) AS profit FROM public.customer_master
JOIN ecommerce_sales_customers ON ecommerce_sales_customers.customer_id = customer_master.customer_id
GROUP BY customer_master.customer_name
ORDER BY total_orders DESC 
LIMIT 100
SELECT 
    table_name,
    column_name,
    data_type
FROM information_schema.columns
WHERE table_schema = 'public'
ORDER BY table_name, ordinal_position;
SELECT customer_master.customer_name, COUNT(ecommerce_sales_customers.order_id) AS total_orders FROM customer_master
JOIN ecommerce_sales_customers ON ecommerce_sales_customers.customer_id = customer_master.customer_id
GROUP BY customer_master.customer_name
HAVING COUNT(ecommerce_sales_customers.order_id) > (SELECT AVG(total) FROM (SELECT COUNT( DISTINCT ecommerce_sales_customers.order_id) AS total FROM ecommerce_sales_customers
GROUP BY ecommerce_sales_customers.customer_id))
ORDER BY total_orders DESC
SELECT product_catalog.product_name, COUNT(order_items.product_id) AS total_sales FROM product_catalog
JOIN order_items ON order_items.product_id = product_catalog.product_id
GROUP BY product_catalog.product_name
HAVING COUNT(order_items.order_id) > (SELECT AVG(total) 
                                        FROM (SELECT COUNT(DISTINCT order_items.order_id) AS total FROM order_items
                                              GROUP BY order_items.order_id))
ORDER BY total_sales DESC
LIMIT 200
------------------
SELECT COUNT(order_items.product_id) AS cnt_rows, COUNT(DISTINCT order_items.order_id) AS cnt_orders, SUM(order_items.quantity) FROM order_items
JOIN product_catalog ON product_catalog.product_id = order_items.product_id
WHERE product_name = 'OnePlus Adaptive uniform success Gaming Consoles'