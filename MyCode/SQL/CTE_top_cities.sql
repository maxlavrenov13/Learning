WITH top_cities AS(
    SELECT COUNT(customer_id) AS total_customers, customer_city, SUM(net_sales) AS total_sales, SUM(net_sales) / COUNT(DISTINCT customer_id) AS average FROM ecommerce_sales_customers esc
    GROUP BY customer_city
    
)
SELECT * FROM top_cities tc
ORDER BY tc.total_sales DESC
LIMIT 1000 
