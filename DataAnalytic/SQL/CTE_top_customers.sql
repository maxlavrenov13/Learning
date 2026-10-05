WITH total_orders AS(
    SELECT customer_id, COUNT(DISTINCT order_id) AS total_sales, SUM(profit) AS total_profit FROM public.ecommerce_sales_customers esc
    GROUP BY esc.customer_id
),
top_clients AS(
    SELECT customer_name, total_orders.total_sales, total_orders.total_profit FROM customer_master cm
    JOIN total_orders ON total_orders.customer_id = cm.customer_id
)
SELECT * FROM top_clients
ORDER BY total_sales DESC
LIMIT 100
